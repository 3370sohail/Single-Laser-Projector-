int x;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {

    for (x = 0; x < 4000; x++)
        {
          
          //full #1
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
         
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
           
          delayMicroseconds(1500);
          
          //half#1
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
         
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
           
          delayMicroseconds(1500);
          
          
          //full #2
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
          
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          delayMicroseconds(1500);

          //half #2
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
         
          digitalWrite(4, LOW);
          digitalWrite(5, HIGH);
           
          delayMicroseconds(1500);
          
          //full #3
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
          
          digitalWrite(4, LOW);
          digitalWrite(5, HIGH);
          
          delayMicroseconds(1500);

          //half #3
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
         
          digitalWrite(4, LOW);
          digitalWrite(5, HIGH);
           
          delayMicroseconds(1500);
          
          //full #4
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          
          delayMicroseconds(1500);

          //half #4
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          
          digitalWrite(4, HIGH);
          digitalWrite(5, LOW);
          
          delayMicroseconds(1500);
          
        }
       
}
