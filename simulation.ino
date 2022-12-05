void setup ()
{
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  while (!Serial.available());
  String str = Serial.readString();
  // Serial.println(x);
  // String str = "hello";
  for(int i=0; str[i]!='\0'; i++)
  {
    switch(str[i])
{
case 'a':

    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
break;

case 'b':

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    delay(500);
break;

case 'c':

    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    delay(500);
break;

case 'd':

    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'e':

    digitalWrite(2, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'f':

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    delay(500);
break;

case 'g':

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'h':

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'i':

    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    delay(500);
break;

case 'j':

    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'k':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay(500);
break;

case 'l':

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(500);
break;

case 'm':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    delay(500);
break;

case 'n':

    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    delay(500);  
    digitalWrite(2, LOW);  
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    delay(500);  
break;

case 'o':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);  
    digitalWrite(12, LOW);
    digitalWrite(4, LOW);
    delay(500);
break;

case 'p':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(2, LOW);  
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    delay(500);
break;

case 'q':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);  
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'r':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, LOW);  
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 's':

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    delay(500);
break;

case 't':

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    delay(500);
break;

case 'u':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(13, LOW);
    delay(500);
break;

case 'v':

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(13, LOW);
    delay(500);
break;

case 'w':

    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(500);
break;

case 'x':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    delay(500);
break;

case 'y':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(500);
break;

case 'z':

    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(500);
break;

    }
  }
}