#include <SoftwareSerial.h>
//SoftwareSerial BTSerial(10, 11); // RX | TX
int ledpin=13;

void setup() 
{
 Serial.begin(9600);
 //Serial.println("Enter AT commands:");
 //BTSerial.begin(38400); // HC-05 default speed in AT command more
 pinMode(ledpin,OUTPUT);
}
void loop()
{
 // Keep reading from HC-05 and send to Arduino Serial Monitor
 //if (Serial.available())
 //Serial.write(Serial.read());
 // Keep reading from Arduino Serial Monitor and send to HC-05
 if (Serial.available())
 {
    int x=Serial.read();
    Serial.println(x);
    if(x==49)
    {
      digitalWrite(ledpin,HIGH);
    }
    else
    {
      digitalWrite(ledpin,LOW);
    }
 }
} 
