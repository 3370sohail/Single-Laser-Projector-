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
  pinMode(10, OUTPUT);
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
   digitalWrite(10, HIGH);
  //all four values = 4 makes 2 circles fast 
  sound = analogRead(x);
  Serial.println(sound);
    if (sound < 5) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
    else if (sound < 10) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[2][0]);
        digitalWrite(3, steps[2][1]);
        digitalWrite(4, steps[2][2]);
        digitalWrite(5, steps[2][3]);
        
        digitalWrite(6, steps[4][0]);
        digitalWrite(7, steps[4][1]);
        digitalWrite(8, steps[4][2]);
        digitalWrite(9, steps[4][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[1][0]);
        digitalWrite(3, steps[1][1]);
        digitalWrite(4, steps[1][2]);
        digitalWrite(5, steps[1][3]);
        
        digitalWrite(6, steps[5][0]);
        digitalWrite(7, steps[5][1]);
        digitalWrite(8, steps[5][2]);
        digitalWrite(9, steps[5][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[2][0]);
        digitalWrite(3, steps[2][1]);
        digitalWrite(4, steps[2][2]);
        digitalWrite(5, steps[2][3]);
        
        digitalWrite(6, steps[4][0]);
        digitalWrite(7, steps[4][1]);
        digitalWrite(8, steps[4][2]);
        digitalWrite(9, steps[4][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
    else if (sound < 15) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[2][0]);
        digitalWrite(3, steps[2][1]);
        digitalWrite(4, steps[2][2]);
        digitalWrite(5, steps[2][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[1][0]);
        digitalWrite(3, steps[1][1]);
        digitalWrite(4, steps[1][2]);
        digitalWrite(5, steps[1][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[2][0]);
        digitalWrite(3, steps[2][1]);
        digitalWrite(4, steps[2][2]);
        digitalWrite(5, steps[2][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
    else if (sound < 20) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[2][0]);
        digitalWrite(3, steps[2][1]);
        digitalWrite(4, steps[2][2]);
        digitalWrite(5, steps[2][3]);
        
        digitalWrite(6, steps[2][0]);
        digitalWrite(7, steps[2][1]);
        digitalWrite(8, steps[2][2]);
        digitalWrite(9, steps[2][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[1][0]);
        digitalWrite(3, steps[1][1]);
        digitalWrite(4, steps[1][2]);
        digitalWrite(5, steps[1][3]);
        
        digitalWrite(6, steps[1][0]);
        digitalWrite(7, steps[1][1]);
        digitalWrite(8, steps[1][2]);
        digitalWrite(9, steps[1][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[2][0]);
        digitalWrite(3, steps[2][1]);
        digitalWrite(4, steps[2][2]);
        digitalWrite(5, steps[2][3]);
        
        digitalWrite(6, steps[2][0]);
        digitalWrite(7, steps[2][1]);
        digitalWrite(8, steps[2][2]);
        digitalWrite(9, steps[2][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
    else if (sound < 25) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[2][0]);
        digitalWrite(7, steps[2][1]);
        digitalWrite(8, steps[2][2]);
        digitalWrite(9, steps[2][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[1][0]);
        digitalWrite(7, steps[1][1]);
        digitalWrite(8, steps[1][2]);
        digitalWrite(9, steps[1][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[2][0]);
        digitalWrite(7, steps[2][1]);
        digitalWrite(8, steps[2][2]);
        digitalWrite(9, steps[2][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
  else if (sound < 30) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[4][0]);
        digitalWrite(3, steps[4][1]);
        digitalWrite(4, steps[4][2]);
        digitalWrite(5, steps[4][3]);
        
        digitalWrite(6, steps[2][0]);
        digitalWrite(7, steps[2][1]);
        digitalWrite(8, steps[2][2]);
        digitalWrite(9, steps[2][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[5][0]);
        digitalWrite(3, steps[5][1]);
        digitalWrite(4, steps[5][2]);
        digitalWrite(5, steps[5][3]);
        
        digitalWrite(6, steps[1][0]);
        digitalWrite(7, steps[1][1]);
        digitalWrite(8, steps[1][2]);
        digitalWrite(9, steps[1][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[4][0]);
        digitalWrite(3, steps[4][1]);
        digitalWrite(4, steps[4][2]);
        digitalWrite(5, steps[4][3]);
        
        digitalWrite(6, steps[2][0]);
        digitalWrite(7, steps[2][1]);
        digitalWrite(8, steps[2][2]);
        digitalWrite(9, steps[2][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
  else if (sound < 35) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[4][0]);
        digitalWrite(3, steps[4][1]);
        digitalWrite(4, steps[4][2]);
        digitalWrite(5, steps[4][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[5][0]);
        digitalWrite(3, steps[5][1]);
        digitalWrite(4, steps[5][2]);
        digitalWrite(5, steps[5][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[4][0]);
        digitalWrite(3, steps[4][1]);
        digitalWrite(4, steps[4][2]);
        digitalWrite(5, steps[4][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
      }
  }
  else if (sound > 40) {
      for(int y = 0; y < 5; y++){
        digitalWrite(2, steps[4][0]);
        digitalWrite(3, steps[4][1]);
        digitalWrite(4, steps[4][2]);
        digitalWrite(5, steps[4][3]);
        
        digitalWrite(6, steps[4][0]);
        digitalWrite(7, steps[4][1]);
        digitalWrite(8, steps[4][2]);
        digitalWrite(9, steps[4][3]);
    
        delayMicroseconds(500);
        
        digitalWrite(2, steps[5][0]);
        digitalWrite(3, steps[5][1]);
        digitalWrite(4, steps[5][2]);
        digitalWrite(5, steps[5][3]);
        
        digitalWrite(6, steps[5][0]);
        digitalWrite(7, steps[5][1]);
        digitalWrite(8, steps[5][2]);
        digitalWrite(9, steps[5][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[4][0]);
        digitalWrite(3, steps[4][1]);
        digitalWrite(4, steps[4][2]);
        digitalWrite(5, steps[4][3]);
        
        digitalWrite(6, steps[4][0]);
        digitalWrite(7, steps[4][1]);
        digitalWrite(8, steps[4][2]);
        digitalWrite(9, steps[4][3]);
    
        delayMicroseconds(500);

        digitalWrite(2, steps[3][0]);
        digitalWrite(3, steps[3][1]);
        digitalWrite(4, steps[3][2]);
        digitalWrite(5, steps[3][3]);
        
        digitalWrite(6, steps[3][0]);
        digitalWrite(7, steps[3][1]);
        digitalWrite(8, steps[3][2]);
        digitalWrite(9, steps[3][3]);
    
        delayMicroseconds(500);
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
