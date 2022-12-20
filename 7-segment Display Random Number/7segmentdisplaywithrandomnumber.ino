
const int  buttonPin = 10;    // the pin that the pushbutton is attached to
int buttonState = 0;          // current state of the button
int lastButtonState = LOW;    // previous state of the button

int rndm;


void setup()
{
  Serial.begin(9600);
  
  randomSeed(analogRead(A0));
  pinMode(buttonPin,INPUT_PULLUP);

 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(9,OUTPUT);
}

void loop()
{

  

  if (digitalRead(buttonPin) == HIGH) {
        rndm = random(10);
        digitalWrite(9, HIGH);
        delay(200);
        digitalWrite(9, LOW);
        delay(200);
        digitalWrite(9, HIGH);
        delay(200);
        digitalWrite(9, LOW);
  }
  
  
  switch (rndm) {
  case 0:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    break;

 case 1:
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
  break;

case 2:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
  break;
case 3:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
  break;

case 4:
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    break;

case 5:
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    break;

case 6:
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    break;

case 7:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    break;
  
case 8:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    break;
  
  case 9:
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    break;
  }


}