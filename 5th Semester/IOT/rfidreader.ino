#include<SoftwareSerial.h>
SoftwareSerial mySerial(9,10);
int count=0;
char input[12];
boolean flag=0;
int g=2;
int r=3;
char check[12]={'5','1','0','0','9','3','E','0','1','F','3','D'};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(mySerial.available())
  {
    count=0;
    while(mySerial.available() && count<12)
 
    {
        input[count]=mySerial.read();
        count++;
        delay(5);
    }
    Serial.println(input);
    for(int i=0;i<12;i++)
    {
      if(input[i]!=check[i])
      {
        flag=1;
        break;
        
      }
//      else
//      {
//        flag=0;
//        Serial.println("!OK");
//      }
    }
    if(flag==1)
    {
      digitalWrite(r,HIGH);
      digitalWrite(g,LOW);
      Serial.println("!OK");
    }
    else
    {
      digitalWrite(g,HIGH);
      digitalWrite(r,LOW);
      Serial.println("OK");
    }
    //digitalWrite(r,HIGH);
  }
}
