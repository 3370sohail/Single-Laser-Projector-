// Beats by Laser Projector

#define beat A1

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
  pinMode(beat, INPUT);
  Serial.begin(9600);
}

const int steps[8][4] = {
  {HIGH, LOW, LOW, LOW}, {HIGH, LOW, HIGH, LOW},
  {LOW, LOW, HIGH, LOW}, {LOW, HIGH, HIGH, LOW},
  {LOW, HIGH, LOW, LOW}, {LOW, HIGH, LOW, HIGH},
  {LOW, LOW, LOW, HIGH}, {HIGH, LOW, LOW, HIGH}
};

const int sig[2] = {LOW, HIGH};

int seqX[32]= {3, 3, 3, 3, 5, 5, 5, 5, 3, 3, 3, 3, 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5, 3, 3, 3, 3, 1, 1, 1, 1};
                
int seqY[32]= {1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 1, 1, 1, 1};

int seqL[32]= {1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0};

int counterX = 0;
int counterY = 0;
int counterL = 0;

void loop() {
  // put your main code here, to run repeatedly:
  // stepFromTo(0, 3, 0);

  // Beat Serial Monnitor
  int beats = analogRead(beat);
  Serial.println(beats);
  
  digitalWrite(10, sig[seqL[counterL]]);
  
  digitalWrite(2, steps[seqX[counterX]][0]);
  digitalWrite(3, steps[seqX[counterX]][1]);
  digitalWrite(4, steps[seqX[counterX]][2]);
  digitalWrite(5, steps[seqX[counterX]][3]);

  digitalWrite(6, steps[seqY[counterY]][0]);
  digitalWrite(7, steps[seqY[counterY]][1]);
  digitalWrite(8, steps[seqY[counterY]][2]);
  digitalWrite(9, steps[seqY[counterY]][3]);
    
  delayMicroseconds(2100);
  //550 for letters

  counterX = (counterX + 1) % 32;
  counterY = (counterY + 1) % 32;
  counterL = (counterL + 1) % 32;
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

