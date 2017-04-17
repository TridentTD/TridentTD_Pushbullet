/*

 [TridentTD] : MANABU's Esp8266 IoT Library
 www.facebook.com/miniNodeMCU
 
 TridentTD_Pushbullet.h - A simple push message to mobilephone by Pushbullet

 Version 1.0  03/04/2560 Buddism Era  (2017)
 

Copyright (c) 2016-2017 TridentTD

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/



#ifndef _TridentTD_Pushbullet_H_
#define _TridentTD_Pushbullet_H_

#include <Arduino.h>
#include <ESP8266WiFi.h>


//#define  TridentTD_DEBUG_MODE

#ifdef TridentTD_DEBUG_MODE
    #define DEBUG_PRINTER Serial
    #define DEBUG_PRINT(...) { DEBUG_PRINTER.print(__VA_ARGS__); }
    #define DEBUG_PRINTLN(...) { DEBUG_PRINTER.println(__VA_ARGS__); }
#else
    #define DEBUG_PRINT(...) { }
    #define DEBUG_PRINTLN(...) { }
#endif

class TridentTD_Pushbullet {
  public:
    TridentTD_Pushbullet(String token);
    bool    wificonnect(char *ssid, char *pass);
    String  getVersion();
    bool    sendMessage(String title, String message); 
    bool    sendMessage(String title, String message, String url);
  private:
    float   _version = 1.0;
    String  _token;
    
    WiFiClientSecure _clientSecure;
}
;

#endif 
/* _TridentTD_Pushbullet_H_ */
