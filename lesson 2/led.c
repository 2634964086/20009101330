// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
 
{ int i;
 
  for(i=12;i>=5;i--)
  {digitalWrite(i, HIGH);
  
  
  
   delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
   delay(500);} //Wait for 1000 millisecond(s)
}
