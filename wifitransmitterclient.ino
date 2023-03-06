#include "WiFi.h"
 
const char *ssid = "user";
const char *password = "123455678";
 
void setup() {
setCpuFrequencyMhz(80); 
}
 
void loop() 
  {
 
    Serial.begin(115200);
    WiFi.softAP(ssid,password);
    Serial.println();
    Serial.print("IP address: ");
    Serial.println(WiFi.softAPIP());  
 
  
  }
