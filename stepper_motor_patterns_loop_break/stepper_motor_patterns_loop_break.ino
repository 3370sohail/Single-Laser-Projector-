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
  digitalWrite(10, HIGH);
  //all four values = 4 makes 2 circles fast 
  
  for(int j = 1; j < 5; j++){
    for(int k = 1; k < 5; k++){
      for(int z = 0; z < 500; z++){
        stepFromTo(0, j, 4);
        stepFromTo(j, 0, 4);
        
        
        stepFromTo(0, k, 0);
        stepFromTo(k, 0, 0);
     
      }
    }
  }

 /* for(int x = 0; x < 50; x++){
    digitalWrite(10, HIGH);
    stepFromTo(0, 2, 4);
    digitalWrite(10, LOW);
    stepFromTo(0, 2, 0);
    digitalWrite(10, HIGH);
    stepFromTo(2, 0, 4);
    digitalWrite(10, LOW);
    stepFromTo(2, 0, 0);
  }

  for(int y = 0; y < 50; y++){
    digitalWrite(10, LOW);
    stepFromTo(0, 2, 4);
    digitalWrite(10, HIGH);
    stepFromTo(0, 2, 0);
    digitalWrite(10, LOW);
    stepFromTo(2, 0, 4);
    digitalWrite(10, HIGH);
    stepFromTo(2, 0, 0);
  }
  */
}

void stepFromTo(int x, int y, int z){
  if(x < y){
    for(int i = x; i < y; i++){
      digitalWrite(2+z, steps[i+1][0]);
      digitalWrite(3+z, steps[i+1][1]);
      digitalWrite(4+z, steps[i+1][2]);
      digitalWrite(5+z, steps[i+1][3]);
    
      delayMicroseconds(1000);
    }
  }else{
    for(int j = x; j > y; j--){
      digitalWrite(2+z, steps[j-1][0]);
      digitalWrite(3+z, steps[j-1][1]);
      digitalWrite(4+z, steps[j-1][2]);
      digitalWrite(5+z, steps[j-1][3]);
    
      delayMicroseconds(1000);
    }
  }
}
