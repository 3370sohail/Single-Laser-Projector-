int x = 0;
int sound;

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
  Serial.begin(9600);

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
  sound = analogRead(x);
  Serial.println(sound);
    if (sound < 30) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 2, 4);
        stepFromTo(0, 2, 0);
        stepFromTo(2, 0, 4);
        stepFromTo(2, 0, 0);
        
      }
    delay(10);
  }
    else if (sound < 100) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 4, 4);
        stepFromTo(4, 0, 4);
      }
    delay(10);
  }
    else if (sound < 150) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 4, 4);
        stepFromTo(0, 4, 0);
        stepFromTo(4, 0, 4);
        stepFromTo(4, 0, 0);
      }
    delay(10);
  }
    else if (sound < 200) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 2, 4);
        stepFromTo(0, 3, 0);
        stepFromTo(2, 0, 4);
        stepFromTo(3, 0, 0);
      }
    delay(10);
  }
    else if (sound < 250) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 3, 4);
        stepFromTo(0, 1, 0);
        stepFromTo(3, 0, 4);
        stepFromTo(1, 0, 0);
      }
    delay(10);
  }
  else if (sound < 350) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 4, 4);
        stepFromTo(0, 1, 0);
        stepFromTo(4, 0, 4);
        stepFromTo(1, 0, 0);
      }
    delay(10);
  }
  else if (sound < 450) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 4, 4);
        stepFromTo(0, 2, 0);
        stepFromTo(4, 0, 4);
        stepFromTo(2, 0, 0);
      }
    delay(10);
  }
  else if (sound > 550) {
      for(int y = 0; y < 10; y++){
        stepFromTo(0, 3, 4);
        stepFromTo(3, 0, 4);
      }
    delay(10);
  }
  delay(10);
  
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
