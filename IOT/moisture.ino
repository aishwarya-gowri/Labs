#include<Servo.h>
Servo s;
int input=A0;
int output=9;

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(output,OUTPUT);
s.attach(output);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(input);
Serial.println(value);
int threshold=500;
if(value>threshold)
{
  for(int i=0;i<180;i++)
  {
    s.write(i);
    delay(30);
  }
  for(int i=180;i>0;i--)
  {
    s.write(i);
    delay(30);
  }
}
}
