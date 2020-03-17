  int green = 3;
  int red = 4;
  String recivedData = "";
  bool stateG = false;
  bool stateR = false;

  
void setup() {
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);

  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
} // end of 'void setup'

void loop(){

  
   if(Serial.available() > 0){
    recivedData = Serial.readStringUntil('\n');
    
      if((recivedData == "green") || recivedData == ("Green")){
        if(stateG == false){
          digitalWrite(green,HIGH);
          stateG = true;
        }else if(stateG == true){
          digitalWrite(green,LOW);
          stateG = false;
        }
      }else if((recivedData == "red") || recivedData == ("Red")){
        if(stateR == false){
          digitalWrite(red,HIGH);
          stateR = true;
        }else if(stateR == true){
          digitalWrite(red,LOW);
          stateR = false;
        }
      }else{
          Serial.println("Żle wybrany kolor, proszę wybierz miedzy Green a Red.");
          delay(3000);
        }
   }
} // end of 'void loop'
