#include <TridentTD_Pushbullet.h>

#define ssid         "----- SSID -----"
#define pass         "----- PASS -----"

#define Pushbullet_TOKEN        "----- Pushbullet TOKEN -----"

#define Pushbullet_user_email   "----- Pushbullet Friend's Email -----"

TridentTD_Pushbullet myPBullet(Pushbullet_TOKEN);

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println(myPBullet.getVersion());
  
  myPBullet.wificonnect(ssid,pass);

  if( myPBullet.sendChat(Pushbullet_user_email, "HELLO my friend") ) {
    Serial.println("[TridentTD Pushbullet] Send OK");
  } else {
    Serial.println("[TridentTD Pushbullet] Send Fail!");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
