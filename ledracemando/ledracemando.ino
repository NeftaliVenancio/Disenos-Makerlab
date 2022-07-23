int r = 3;
int g = 2;
int b = 4;

int sensor = 8;
int intira = 16;
int dout = 15;

int lec = 0;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
  
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);

pinMode(dout,OUTPUT);
pinMode(intira,INPUT);
pinMode(sensor,INPUT);


digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);

delay(500);

if(digitalRead(intira) == 1)
{

  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);
  
}
else
{

  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  
}

}

void loop() {
  // put your main code here, to run repeatedly:

  lec = digitalRead(sensor);
  Serial.println(lec);
  if(lec == 1)
  {
    digitalWrite(dout,LOW);
    delay(25);
    digitalWrite(dout,HIGH);
  }
  else{
    digitalWrite(dout,HIGH); 
  }

}
