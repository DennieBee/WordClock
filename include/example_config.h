// COPY THIS FILE AND RENAME IT TO "config.h" AND ENTER ALL YOUR CONFIGURATION DATA BELOW

#ifndef CONFIG_H
#define CONFIG_H

// Replace with your actual SSID and password:
#define WIFI_SSID       "Your SSID here"
#define WIFI_PASSWD     "WLAN AP password here"

#define OTA_HOSTNAME    "wordclock"
#define OTA_PASSWORD    "my_ota_secret" // See example_env_secrets.ini / env_secrets.ini
#define OTA_PORT        8266

// Replace with your actual timezone:
#define NTP_HOST        "pool.ntp.org"
#define NTP_TIMEZONE    "Europe/Amsterdam"
#define NTP_SYNCINTERVAL 1800       // In seconds

// LED display properties
#define DISPLAY_LED_PIN     2
#define DISPLAY_NUM_LEDS    115
#define DISPLAY_BRIGHTNESS  64
#define DISPLAY_LED_TYPE    WS2812B
#define DISPLAY_COLOR_ORDER GRB

// Define status LED indices
#define STATUSLED_CLOCK     0x00
#define STATUSLED_HEART     0x01
#define STATUSLED_PARTY     0x02
#define STATUSLED_ALARM     0x03
#define STATUSLED_WIFI      0x04

// Clock settings
#define CLOCK_USEROUNDING   true    // Will round to the nearest 5 minutes instead of switching at exact time
#define CLOCK_FPS           25      // Number of (desired) frames per second, no guarantees
#endif