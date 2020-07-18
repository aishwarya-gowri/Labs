int buzzer=13;
int flamepin=2;
int flame=HIGH;
void setup(){
  pinMode(buzzer,OUTPUT);
  pinMode(flamepin,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  flame=digitalRead(flamepin);
  if(flame==LOW)
  {
    Serial.println("FLAME DETECTED");
    digitalWrite(buzzer,HIGH);
  }
  
  else
  {
    Serial.println("FLAME NOT DETECTED");
    digitalWrite(buzzer,LOW);
    
  }
  delay(1000);
}
