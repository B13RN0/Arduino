  int green = 3;
  int yellow = 4;
  int red = 5;
  
  int button = 2;

  int greenP = 6;
  int redP = 7;

  bool glow;
  int switchState;
  int oldSwitchState;
  
void setup() {

    glow = false;
    
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);

    pinMode(button,INPUT_PULLUP);

    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
} // end of 'void setup'

void loop()
{
  switchState = bitRead(PIND, 2);
  if(oldSwitchState != switchState){
    oldSwitchState = switchState;
    delay(10);
    if(switchState == 0){
      changeLights();
    }
  }else {lightS();}

  delay(1000);
 
  
} // end of 'void loop'

void lightS()
  {
    //      [R][g]  ||  [R][Y][g]        
      digitalWrite(redP, HIGH);
      digitalWrite(greenP, LOW);
      
      digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(red, HIGH);

      delay(2500);

    //      [R][g]  ||  [r][y][G] 
      digitalWrite(green, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(red, LOW);
      
      delay(8000);

    //      [R][g]  ||  [r][Y][g] 
      digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(red, LOW);
      
      delay(2500);

    //      [R][g]  ||  [R][y][g] 
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);

      delay(8000);
  } // end of 'void lisghtS'

void changeLights()
  {
      digitalWrite(redP, LOW);
      digitalWrite(greenP, HIGH);
      
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);

      delay(3000);
      for(int i=0; i<=5; i++){
              digitalWrite(redP, LOW);
              digitalWrite(greenP, HIGH);
              delay(500);
              digitalWrite(redP, LOW);
              digitalWrite(greenP, LOW);
              delay(500);
              digitalWrite(redP, HIGH);
              digitalWrite(greenP, LOW);
         }
  }
