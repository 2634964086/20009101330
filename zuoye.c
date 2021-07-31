#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

#define LT 7
#define BT 8
#define S 9

int pinInterrupt=2;
int tick = 0; ����ֵ
int state=0;

�жϷ������
void myfunc()
{
  tick=-1;
  Serial.println(tick);
}
 
void setup()
{
  pinMode(IN1, OUTPUT);����1
  pinMode(IN2, OUTPUT);����2
  pinMode(IN3, OUTPUT);����3
  pinMode(IN4, OUTPUT);����4
  
  pinMode(S, OUTPUT);
  pinMode(LT, OUTPUT);
  pinMode(BT, OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(S,HIGH);

  Serial.begin(9600); ��ʼ������
  pinMode(13,OUTPUT);
  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 
byte income=0;
void loop()
{
  Serial.println(tick++);
  if(tick==10) tick=0;
  income=tick-'0';
  digitalWrite(S,LOW);
  digitalWrite(IN1,income&0x1);
  digitalWrite(IN2,(income1)&0x1);
  digitalWrite(IN3,(income2)&0x1);
  digitalWrite(IN4,(income3)&0x1);
  digitalWrite(S,HIGH);
  
  state=~state;
  digitalWrite(13,state);
  delay(1000);
  
}

