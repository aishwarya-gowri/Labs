const int s0=8;
const int s1=9;
const int s2=12;
const int s3=11;
const int out=10;
int redled=2;
int greenled=3;
int blueled=4;
int red=0;
int green=0;
int blue=0;
void color();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(out,INPUT);
  pinMode(redled,OUTPUT);
 pinMode(greenled,OUTPUT);
 pinMode(blueled,OUTPUT);
 digitalWrite(s1,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  color();
  Serial.print("R intensity: ");
  Serial.println(red,DEC);
  Serial.print("G intensity: ");
  Serial.println(green,DEC);
  Serial.print("B intensity: ");
  Serial.println(blue,DEC);
  if(red<blue && red<green)
  {
    Serial.println("red color");
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    digitalWrite(blueled,LOW);
    
  }
  else if(blue<red && red<green)
  {
    Serial.println("blue color");
    digitalWrite(redled,LOW);
    digitalWrite(greenled,LOW);
    digitalWrite(blueled,HIGH);
  }
  else if(green<blue && green<red)
  {
    Serial.println("green color");
    digitalWrite(redled,LOW);
    digitalWrite(greenled,HIGH);
    digitalWrite(blueled,LOW);
    
  }
  else
  {
    Serial.println();
  }
  delay(1000);
  digitalWrite(redled,LOW);
    digitalWrite(greenled,LOW);
    digitalWrite(blueled,LOW);
}
void color()
{
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  red=pulseIn(out,digitalRead(out)==HIGH?LOW:HIGH);
  digitalWrite(s3,HIGH);
  blue=pulseIn(out,digitalRead(out)==HIGH?LOW:HIGH);
  digitalWrite(s2,HIGH);
  green=pulseIn(out,digitalRead(out)==HIGH?LOW:HIGH);
  //digitalWrite(s3,HIGH);
}
