TridentTD_Pushbullet
============
[TridentTD] Manabu's Esp8266 IoT Library
---------------------------------------------

`TridentTD_Pushbullet` is a library for `ESP8266` board  
to push message to your Android Phone in the simplest method.

# Install

Clone (or download and unzip) the repository to `~/Documents/Arduino/libraries`
where `~/Documents/Arduino` is your sketchbook directory.

    > cd ~/Documents/Arduino
    > mkdir libraries
    > cd libraries
    > git clone https://github.com/TridentTD/TridentTD_Pushbullet.git TridentTD_Pushbullet

# Usage
### Include

You need to have the `ESP8266` board support already included.

```c++
#include <TridentTD_Pushbullet.h>
```

### TridentTD\_Pushbullet  myPBullet(Pushbullet_TOKEN)

Constructor to create an TridentTD_Pushbullet object.

```c++
TridentTD_Pushbullet  myPBullet(Pushbullet_TOKEN);
```

### wificonnect( ssid,password )

Setup the `ESP8266` board's `wifi` to the `ssid` . 
However you can connect by yourself.

```c++
myPBullet.wificonnect( ssid,password );
```

### sendMessage(String message)
### sendMessage(String title, String message)
### sendMessage(String title, String message, String url)

send the message to your phone.

```c++
myPBullet.sendMessage("HELLO Pushbullet");
myPBullet.sendMessage("From Me","HELLO Pushbullet with TITLE");
myPBullet.sendMessage("From Me","HELLO Pushbullet with URL", "http://www.google.com");
```

### sendChat(String pushbullet_user_email, String message)

send the message to your Pushbullet-friend.
```c++
myPBullet.sendChat("----yourfriend@mail.com---", "Hello Chat by pushbullet");
```

### getVersion()

Get version of this library.

```c++
myPBullet.getVersion();
```

Version
=====
1.2  TridentTD_Pushbullet

@ 17 April 2560 BE (Buddism Era)  / 2017  
Ven. Phaisarn Techajaruwong
