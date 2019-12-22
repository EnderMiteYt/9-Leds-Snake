int i = 2;
int j;
void setup()
#define spd 100 
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
    HIGHAll();
    delay(spd);
    LOWAll();
    delay(spd);
    
}
void HIGHAll(){
  digitalWrite(2,HIGH);
  delay(spd);
  digitalWrite(3,HIGH);
  delay(spd);
  digitalWrite(4,HIGH);
  delay(spd);
  digitalWrite(5,HIGH);
  delay(spd);
  digitalWrite(6,HIGH);
  delay(spd);
  digitalWrite(7,HIGH);
  delay(spd);
  digitalWrite(8,HIGH);
  delay(spd);
  digitalWrite(9,HIGH);
  delay(spd);
  digitalWrite(10,HIGH);

 
}
void LOWAll(){
  digitalWrite(10,LOW);
  delay(spd);
  digitalWrite(9,LOW);
  delay(spd);
  digitalWrite(8,LOW);
  delay(spd);
  digitalWrite(7,LOW);
  delay(spd);
  digitalWrite(6,LOW);
  delay(spd);
  digitalWrite(5,LOW);
  delay(spd);
  digitalWrite(4,LOW);
  delay(spd);
  digitalWrite(3,LOW);
  delay(spd);
  digitalWrite(2,LOW);

     
}
