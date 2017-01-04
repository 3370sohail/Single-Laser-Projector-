int x;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {

    for (x = 0; x < 400; x++)
        {
          
          
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
         
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
           
          //delayMicroseconds(100000);
          delay(500);
          
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
          
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          //delayMicroseconds(100000);
          delay(500);
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
          
          digitalWrite(4, LOW);
          digitalWrite(5, HIGH);
          //delayMicroseconds(100000);
          delay(500); 

          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          
          //delayMicroseconds(100000);
          delay(500);
          
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
          
          //delayMicroseconds(100000);
          delay(500);
          
        }
       
}
