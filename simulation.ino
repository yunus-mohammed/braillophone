#include <Servo.h>
Servo s1, s2, s3, s4, s5, s6;
int pos;

void setup ()
{
  Serial.begin(115200);
  Serial.setTimeout(1);
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(7);
  s5.attach(12);
  s6.attach(13);


  s1.write(0);
  s2.write(90);
  s3.write(90);
  s4.write(90);
  s5.write(90);
  s6.write(90);

  delay(1000);

}// f

void loop() {

  while (!Serial.available());
  String str = Serial.readString();
  // String str = "hello";

  for(int i=0; str[i]!='\0'; i++)
  {
    switch(str[i])
    {

    case ' ':
    delay(1500);
    break;
    case 'a':
    // s1.write()
    s4.write(180);
    delay(1000);
    s4.write(90);
    delay(1000);
    break;

    case 'b':
    s4.write(180);
    s2.write(0);
    delay(1000);
    s4.write(90);
    s2.write(90);
    delay(1000);
    break;

    case 'c':
    s4.write(180);
    s5.write(180);
    delay(1000);
    s4.write(90);
    s5.write(90);
    delay(1000);
    break;

    case 'd':
    s4.write(180);
    s5.write(180);
    s6.write(180);
    delay(1000);
    s4.write(90);
    s5.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'e':
    s4.write(180);
    s6.write(180);
    delay(1000);
    s4.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'f':
    s2.write(0);
    s4.write(180);
    s5.write(180);
    delay(1000);
    s2.write(90);
    s4.write(90);
    s5.write(90);
    delay(1000);
    break;


    case 'g':
    s2.write(0);
    s4.write(180);
    s5.write(180);
    s6.write(180);
    delay(1000);
    s2.write(90);
    s4.write(90);
    s5.write(90);
    s6.write(90);
    delay(1000);
    break;


    case 'h':
    s2.write(0);
    s4.write(180);
    s6.write(180);
    delay(1000);
    s2.write(90);
    s4.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'i':
    s2.write(0);
    s5.write(180);
    delay(1000);
    s2.write(90);
    s5.write(90);
    delay(1000);
    break;

    case 'j':
    s2.write(0);
    s5.write(180);
    s6.write(180);
    delay(1000);
    s2.write(90);
    s5.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'k':
    s1.write(90);
    s4.write(180);
    delay(1000);
    s1.write(0);
    s4.write(90);
    delay(1000);
    break;

    case 'l':
    s1.write(90);
    s2.write(0);
    s4.write(180);
    delay(1000);
    s1.write(0);
    s2.write(90);
    s4.write(90);
    delay(1000);
    break;

    case 'm':
    s1.write(90);
    s4.write(180);
    s5.write(180);
    delay(1000);
    s1.write(0);
    s4.write(90);
    s5.write(90);
    delay(1000);
    break;

    case 'n':
    s1.write(90);
    s4.write(180);
    s5.write(180);
    s6.write(180);
    delay(1000);
    s1.write(0);
    s4.write(90);
    s5.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'o':
    s1.write(90);
    s4.write(180);
    s6.write(180);
    delay(1000);
    s1.write(0);
    s4.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'p':
    s1.write(90);
    s2.write(0);
    s4.write(180);
    s5.write(180);
    delay(1000);
    s1.write(0);
    s2.write(90);
    s4.write(90);
    s5.write(90);
    delay(1000);
    break;

    case 'q':
    s1.write(90);
    s2.write(0);
    s4.write(180);
    s5.write(180);
    s6.write(180);
    delay(1000);
    s1.write(0);
    s2.write(90);
    s4.write(90);
    s5.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'r':
    s1.write(90);
    s2.write(0);
    s4.write(180);
    s6.write(180);
    delay(1000);
    s1.write(0);
    s2.write(90);
    s4.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 's':
    s1.write(90);
    s2.write(0);
    s5.write(180);
    delay(1000);
    s1.write(0);
    s2.write(90);
    s5.write(90);
    delay(1000);
    break;

    case 't':
    s1.write(90);
    s2.write(0);
    s5.write(180);
    s6.write(180);
    delay(1000);
    s1.write(0);
    s2.write(90);
    s5.write(90);
    s6.write(90);
    delay(1000);
    break;

    case 'u':
    s4.write(180);
    s1.write(90);
    s3.write(0);
    delay(1000);
    s4.write(90);
    s1.write(0);
    s3.write(90);
    delay(1000);
    break;

    case 'v':
    s4.write(180);
    s2.write(0);
    s1.write(90);
    s3.write(0);
    delay(1000);
    s4.write(90);
    s2.write(90);
    s1.write(0);
    s3.write(90);
    delay(1000);
    break;

    case 'w':
    s2.write(0);
    s5.write(180);
    s6.write(180);
    s3.write(0);
    delay(1000);
    s2.write(90);
    s5.write(90);
    s6.write(90);
    s3.write(90);
    delay(1000);
    break;

    case 'x':
    s4.write(180);
    s5.write(180); 
    s1.write(90);
    s3.write(0);
    delay(1000);
    s4.write(90);
    s5.write(90); 
    s1.write(0);
    s3.write(90);
    delay(1000);
    break;

    case 'y':
    s1.write(90);
    s4.write(180);
    // delay(100);
    s6.write(180);
    s3.write(0);
    s5.write(180);

    delay(1000);

    s1.write(0);
    s4.write(90);
    // delay(100);
    s6.write(90);
    s3.write(90);
    s5.write(90);

    delay(1000);
    break;
    
    case 'z':
    s4.write(180);
    s6.write(180);
    s1.write(90);
    s3.write(0);
    delay(1000);
    s4.write(90);
    s6.write(90);
    s1.write(0);
    s3.write(90);
    delay(1000);
    break;

    }
  }
}
