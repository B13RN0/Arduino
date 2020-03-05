  int green = 3;
  int yellow = 4;
  int red = 5;
  
  int button = 2;

  int greenP = 6;
  int redP = 7;
  
void setup() {
    
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);

    pinMode(button,INPUT_PULLUP);

    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
}

void loop()
{
  while(digitalRead(button) == HIGH)
  {
    lightS();  
  }

  delay(1000);
  while(digitalRead(button) == LOW)
  {
        digitalWrite(green, LOW);
        digitalWrite(yellow, LOW);
        digitalWrite(red, HIGH);
        delay(1000);
        digitalWrite(redP, LOW);
        digitalWrite(greenP, HIGH);
        delay(10000);
        button = HIGH;
  }
  
}

void lightS()
  {
      digitalWrite(redP, HIGH);
      digitalWrite(greenP, LOW);
      
      digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(red, HIGH);

      delay(1000);
      
      digitalWrite(green, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(red, LOW);
      
      delay(1000);

      digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(red, LOW);
      
      delay(1000);
  
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);

      delay(1000);
  }
