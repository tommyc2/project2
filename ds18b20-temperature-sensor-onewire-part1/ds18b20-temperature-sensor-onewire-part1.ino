#include <OneWire.h>
#include <DallasTemperature.h>


#define ONE_WIRE_BUS 4
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void)
{
  Serial.begin(9600);
  sensors.begin();

}

void loop(void){ 

  sensors.requestTemperatures(); 

  float temp = sensors.getTempCByIndex(0); 
  
  Serial.println(sensors.getDeviceCount());

  Serial.print("Celsius temperature: ");
  Serial.print(temp); 

  Serial.print('\n');
  Serial.print('\n');

  delay(1000);
}