#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <wifi.h>
#include <config.h>
#include <statusbar.h>

const char* wifi_ssid = WIFI_SSID;
const char* wifi_pass = WIFI_PASSWD;

void WIFI::Initialize() {
    Serial.printf("Connecting to %s...\n", wifi_ssid);

    StatusBar::SetWiFiStatus(StatusBar::WIFI_STATUS::WS_CONNECTING);
    WiFi.mode(WIFI_STA);
    WiFi.begin(wifi_ssid, wifi_pass);
    while (WiFi.waitForConnectResult() != WL_CONNECTED) {
        Serial.printf("Connection to %s Failed! Rebooting...\n", wifi_ssid);
        StatusBar::SetWiFiStatus(StatusBar::WIFI_STATUS::WS_DISCONNECTED);
        delay(5000);
        ESP.restart();
    }
    Serial.printf("Connected to %s\n", wifi_ssid);
    StatusBar::SetWiFiStatus(StatusBar::WIFI_STATUS::WS_CONNECTED);
}