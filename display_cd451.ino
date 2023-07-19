const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;

const int POT = A5;

byte digitos[10][4] = {
  {0,0,0,0},
  {0,0,0,1},
  {0,0,1,0},
  {0,0,1,1}, 
  {0,1,0,0},  
  {0,1,0,1},
  {0,1,1,0},
  {0,1,1,1},
  {1,0,0,0},
  {1,0,0,1}  
};
  
void mostrarDigito( int num ){
  
  int PINO = D;
  for ( int i = 0; i <4; i++) {
   digitalWrite(PINO,digitos[num][i]);
    PINO--;
  }
}
                 
void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
 int valor = analogRead(POT);
 int num = map(valor,0,1023,0,9);
 mostrarDigito(num);
 delay(40);
}