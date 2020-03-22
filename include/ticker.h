#ifndef TICKER_H
#define TICKER_H

#include <display.h>
#include <ihandler.h>

class Ticker : public IHandler
{
public:
    static void Initialize(String text, CRGB textColor, uint8_t delay);
    static void Handle(HandlerInfo info);
private:
};
#endif