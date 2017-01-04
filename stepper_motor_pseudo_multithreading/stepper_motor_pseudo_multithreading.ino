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

const int sig[2] = {LOW, HIGH};

int seqX[48] = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1};
int seqY[48] = {3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2};
int seqL[46] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int counter = 0;
int counterL = 0;

void loop() {
  // put your main code here, to run repeatedly:
  // stepFromTo(0, 3, 0);
  digitalWrite(10, sig[seqL[counterL]]);
  
  digitalWrite(2, steps[seqX[counter]][0]);
  digitalWrite(3, steps[seqX[counter]][1]);
  digitalWrite(4, steps[seqX[counter]][2]);
  digitalWrite(5, steps[seqX[counter]][3]);

  digitalWrite(6, steps[seqY[counter]][0]);
  digitalWrite(7, steps[seqY[counter]][1]);
  digitalWrite(8, steps[seqY[counter]][2]);
  digitalWrite(9, steps[seqY[counter]][3]);
    
  delayMicroseconds(245);

  counter = (counter + 1) % 48;
  counterL = (counterL + 1) % 46;
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
