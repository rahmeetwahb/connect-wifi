#include <ESP8266WiFi.h>

const char* ssid = "Kosan24";
const char* pass = "pelukdulu";

int wifistatus;
void setup() {
  Serial.begin(115200);
  delay(200);

  Serial.println();
  Serial.print("conect with wifi: ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println("not connected...");
  }

}

void loop() {
  wifistatus = WiFi.status();

  if(wifistatus == WL_CONNECTED){
    Serial.println("");
    Serial.println("ESP8266 already connected to wifi...");
    Serial.println("IP address esp8266: ");
    Serial.println(WiFi.localIP());
  }
  else{
    Serial.println("Wifi not connected...");
  }
  delay(1000);

}
