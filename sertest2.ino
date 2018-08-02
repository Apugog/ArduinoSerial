int j;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
 int i=Serial.read();
 if(i!=10)
 //Serial.println(i-48); 
 j= i-48;
 Serial.println(j); 
 for(i=0;i<j;i++)
 {
   digitalWrite(13,HIGH);
   delay(500);
   digitalWrite(13,LOW);
   delay(500);
   //Serial.println(i);
 }
 j=0;
}
digitalWrite(13,LOW);
}
