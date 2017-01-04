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

}

const int steps[8][4] = {
  {HIGH, LOW, LOW, LOW}, {HIGH, LOW, HIGH, LOW},
  {LOW, LOW, HIGH, LOW}, {LOW, HIGH, HIGH, LOW},
  {LOW, HIGH, LOW, LOW}, {LOW, HIGH, LOW, HIGH},
  {LOW, LOW, LOW, HIGH}, {HIGH, LOW, LOW, HIGH}
};

void loop() {
  // put your main code here, to run repeatedly:

  //all four values = 4 makes 2 circles fast 
  for(int j = 1; j < 5; j++){
    for(int k = 1; k < 5; k++){
      for(int z = 0; z < 500; z++){
        stepFromTo(0, j, 0);
        stepFromTo(0, k, 4);
        stepFromTo(j, 0, 0);
        stepFromTo(k, 0, 4);
      }
    }
  }
  
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
