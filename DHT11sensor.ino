
#include<DHT.h> 
 
DHT dht(2, DHT11);
 
void setup(){
 
  Serial.begin(9600);
  dht.begin();
 
}
void loop(){
  
    delay(2000);
    float h =dht.readHumidity();
    float t = dht.readTemperature();
    
    Serial.print("Current humidity:");
    Serial.print(h);
    Serial.println("%  ");
    Serial.print("temperature:");
    Serial.print(t); 
    Serial.println("*C  ");
    delay(500);
   

}
