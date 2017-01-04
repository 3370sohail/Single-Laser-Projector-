int x;
int ticks;
int dir;
int pos;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  ticks = 10;
  dir = 1;
  pos = 1;
  pos = Truns(ticks, dir, pos);
       
}
int Truns(int ticks, int dir, int pos){
  int j; 
  int i;
  int full = ticks / 8;
  int left_over_ticks = ticks % 8;
  if (dir == 1){
    if (pos == 8){
      pos = 0;
    }
    // full truns forward 
    for (j = 0; j < full; j++){
      for (i = 0 ; i < 8; i++){
       pos = signals(pos+1);
       if (pos == 8){
        pos = 0;
       }
      }
    }
    // ticks forward
    if (pos == 8){
        pos = 0;
      }
    for (i = 0 ; i < left_over_ticks ; i++){
       pos = signals(pos+1);
       if (pos == 8){
        pos = 0;
       }
    }
    if (pos == 0){
    pos = 8;
    }
  }
  if (dir == -1){
    if (pos == 1){
      pos = 9;
    }
    // full truns forward 
    for (j = 0; j < full; j++){
      for (i = 0 ; i < 8; i++){
       pos = signals(pos-1);
       if (pos == 1){
       pos = 9;
       }
      }
    }
    // ticks forward
    if (pos == 1){
        pos = 0;
      }
    for (i = 0 ; i < left_over_ticks ; i++){
       pos = signals(pos+1);
       if (pos == 1){
       pos = 9;
       }
    }
    if (pos == 9){
    pos = 1;
    }
  }


  return pos;
}
int signals(int x){
switch (x) {
    case 1:
      //full #1
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
         
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
           
      delayMicroseconds(1500);
      break;
    case 2:
      //half#1
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
         
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
           
      delayMicroseconds(1500);
      break;
    case 3:
      //full #2
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
         
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
           
      delayMicroseconds(1500);
      break;
    case 4:
      //half #2
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
         
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
           
      delayMicroseconds(1500);
      break;
    case 5:
      //full #3
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
         
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
           
      delayMicroseconds(1500);
      break;
    case 6:
      //half #3
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
         
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
           
      delayMicroseconds(1500);
      break;
    case 7:
      //full #4
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
         
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
           
      delayMicroseconds(1500);
      break;
    case 8:
      //half #4
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
         
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
           
      delayMicroseconds(1500);
      break;
  }
  return x;
}
