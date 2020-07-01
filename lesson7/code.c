#include <MsTimer2.h>  
int n = 0;
byte c = 0;
void jishu()
{
  xianshi(n);
  n++;
  if(n==10)
    n=0;
}
int pinInterrupt = 2;
void zhongduan()
{
  n=0;
}
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT);  
  pinMode(8, OUTPUT); 
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);  
  digitalWrite(11,HIGH);
  Serial.begin(9600); 
  pinMode( pinInterrupt, INPUT);
  MsTimer2::set(1000, jishu); 
  MsTimer2::start(); 
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), zhongduan, CHANGE);
}
void xianshi(int n)
{
  c=n;
  c=c-'0';
  digitalWrite(11,LOW);
  digitalWrite(3,c&0x1);
  digitalWrite(4,(c>>1)&0x1);
  digitalWrite(5,(c>>2)&0x1);
  digitalWrite(6,(c>>3)&0x1);
  digitalWrite(11,HIGH);  
}
void loop()
{
	
}