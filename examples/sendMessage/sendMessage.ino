#include <TridentTD_Pushbullet.h>

#define ssid         "----- SSID -----"
#define pass         "----- PASS -----"

#define Pushbullet_TOKEN   "----- Pushbullet TOKEN -----"

TridentTD_Pushbullet myPBullet(Pushbullet_TOKEN);

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println(myPBullet.getVersion());
  
  myPBullet.wificonnect(ssid,pass);

  if( myPBullet.sendMessage("From Me","HELLO Pushbullet") ) {
    Serial.println("[TridentTD Pushbullet] Send OK");
  } else {
    Serial.println("[TridentTD Pushbullet] Send Fail!");
  }

  if( myPBullet.sendMessage("From Me","HELLO Pushbullet with URL", "http://www.google.com") ) {
    Serial.println("[TridentTD Pushbullet] Send URL OK");
  } else {
    Serial.println("[TridentTD Pushbullet] Send Fail!");
  }


}

void loop() {
  // put your main code here, to run repeatedly:

}
