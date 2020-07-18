int in=1;
int pin=9;

void setup()
{
  // put your setup code here, to run once:
      pinMode(in,INPUT);
      pinMode(pin,OUTPUT);
      Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensedvalue=analogRead(in);

  //int convertedvalue=map(sensedvalue,0,1023,0,255);
  int convertedvalue=sensedvalue%256;
  analogWrite(pin,convertedvalue);
  //delay(30);
  Serial.print("Sensed value is = ");
  Serial.println(sensedvalue);
  delay(500);
  Serial.print("converted value is = ");
  Serial.println(convertedvalue);
}
