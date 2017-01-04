void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(10, OUTPUT);
}

const int steps[8][4] = {
  {HIGH, LOW, LOW, LOW}, {HIGH, LOW, HIGH, LOW},
  {LOW, LOW, HIGH, LOW}, {LOW, HIGH, HIGH, LOW},
  {LOW, HIGH, LOW, LOW}, {LOW, HIGH, LOW, HIGH},
  {LOW, LOW, LOW, HIGH}, {HIGH, LOW, LOW, HIGH}
};

void loop() {
  // put your main code here, to run repeatedly:

//  for(int i = 1; i < 4; i++){
//    for(int k = 1; k < 4; k++){
//      for(int j = 0; j < 200; j++){

          digitalWrite(10, HIGH);
          stepFromTo(0, 3, 0);
          stepFromTo(3, 2, 0);
          stepFromTo(2, 3, 0);
          digitalWrite(10, LOW);
          delay(5);
          stepFromTo(0, 2, 4);
          stepFromTo(2, 1, 4);
          stepFromTo(1, 2, 4);
          delay(5);
          stepFromTo(3, 0, 0);
          stepFromTo(0, 1, 0);
          stepFromTo(1, 0, 0);
          delay(5);
          stepFromTo(2, 4, 4);
          stepFromTo(4, 3, 4);
          stepFromTo(3, 4, 4);
          delay(5);
          stepFromTo(0, 3, 0);
          stepFromTo(3, 2, 0);
          stepFromTo(2, 3, 0);
          stepFromTo(3, 0, 0);
          stepFromTo(0, 1, 0);
          stepFromTo(1, 0, 0);
          delay(5);
          stepFromTo(4, 2, 4);
          stepFromTo(2, 3, 4);
          stepFromTo(3, 2, 4);
          delay(5);
          stepFromTo(0, 3, 0);
          stepFromTo(3, 2, 0);
          stepFromTo(2, 3, 0);
          delay(5);
          stepFromTo(2, 0, 4);
          stepFromTo(0, 1, 4);
          stepFromTo(1, 0, 4);
          delay(5);
          stepFromTo(3, 0, 0);
          stepFromTo(0, 1, 0);
          stepFromTo(1, 0, 0);
//      }
//    }
//  }
}

void stepFromTo(int x, int y, int z){
  if(x < y){
    for(int i = x; i < y; i++){
      digitalWrite(2 + z, steps[i+1][0]);
      digitalWrite(3 + z, steps[i+1][1]);
      digitalWrite(4 + z, steps[i+1][2]);
      digitalWrite(5 + z, steps[i+1][3]);
    
      delayMicroseconds(1000);
    }
  }else{
    for(int j = x; j > y; j--){
      digitalWrite(2 + z, steps[j-1][0]);
      digitalWrite(3 + z, steps[j-1][1]);
      digitalWrite(4 + z, steps[j-1][2]);
      digitalWrite(5 + z, steps[j-1][3]);
    
      delayMicroseconds(1000);
    }
  }
}
