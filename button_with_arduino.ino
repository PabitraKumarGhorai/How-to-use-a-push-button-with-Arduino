int btn = 4;
int ledpin = 13;
int btn_state=0;
void setup()
{
 pinMode(btn,INPUT);
 pinMode(ledpin,OUTPUT); 
} 

void loop()
{
 btn_state=digitalRead(btn);
 if(btn_state==HIGH)
 {
  digitalWrite(ledpin,HIGH);
 }
 else
 {
  digitalWrite(ledpin,LOW);
 }
 
}
