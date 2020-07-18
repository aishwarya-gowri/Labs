#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7); //select the pins used on the lcd panel
int triggerPin=3;
int echoPin=2;

void setup() {
  lcd.begin(16,2); //start the library
  lcd.setCursor(0,0);   //set the lcd cursor position
  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  long duration,inches,cm;
  lcd.setCursor(0,1);
  digitalWrite(triggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  inches=microsecondsToInches(duration);
  cm=microsecondsToCentimeters(duration);
  lcd.print(inches);
  lcd.println("in,");
  lcd.print(cm);
  lcd.println("cm");
  Serial.print(inches);
  Serial.println("in,");
  Serial.print(cm);
  Serial.println("cm");
  delay(1000);
}
long microsecondsToInches(long microseconds)
{
  return microseconds/74/2;
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds/29/2;
}
