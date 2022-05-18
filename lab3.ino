#include<SPI.h>
#include<WiFi.h>
char ssid[]="Raj";
char password[]="12345678";
IPAddress ip(198,186,1,12);
int keyIndex=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.print("ättempting to connect to network (named:)");
Serial.print(ssid);
WiFi.begin(ssid,password);
WiFi.config(ip);
while(WiFi.status()!=WL_CONNECTED)
{Serial.print(".");
delay(300);
}
Serial.println("\n you are connected to the network");
ip=WiFi.localIP();
Serial.print("Static IP Address:");
Serial.print(ip);
}


void loop() {
  // put your main code here, to run repeatedly: 
  
}
