//Codigo C++ Minutero 
//Team Violet Zero

//Definiciones
//Se definen los pines del minutero #1 (unidade)
int a1=8;
int b1=9;
int c1=13;
int d1=12;
int e1=11;
int f1=7;
int g1=10;
//Se definen los pines del minutero #2 (decenas)
int a2=5;
int b2=6;
int c2=2;
int d2=1;
int e2=0;
int f2=4;
int g2=3;

int numero2; //Para saber cuando se subira un digito

//Los números que se van a mostrar en las unidades (a)
//y decenas (b)
void ceroa(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, LOW);}
void cerob(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, LOW);}
void unoa(){
  digitalWrite(a1, LOW);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, LOW);
  digitalWrite(e1, LOW);
  digitalWrite(f1, LOW);
  digitalWrite(g1, LOW);}
void unob(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);}
void dosa(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, LOW);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(f1, LOW);
  digitalWrite(g1, HIGH);}
void dosb(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, LOW);
  digitalWrite(g2, HIGH);}
void tresa(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, LOW);
  digitalWrite(f1, LOW);
  digitalWrite(g1, HIGH);}
void tresb(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, HIGH);}
void cuatroa(){
  digitalWrite(a1, LOW);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, LOW);
  digitalWrite(e1, LOW);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);}
void cuatrob(){
  digitalWrite(a2, LOW);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);}
void cincoa(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, LOW);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, LOW);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);}
void cincob(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, LOW);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, LOW);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);}
void seisa(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, LOW);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);}
void seisb(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, LOW);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);}
void sietea(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, LOW);
  digitalWrite(e1, LOW);
  digitalWrite(f1, LOW);
  digitalWrite(g1, LOW);}
void sieteb(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);}
void ochoa(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, HIGH);
  digitalWrite(e1, HIGH);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);}
void ochob(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);}
void nuevea(){
  digitalWrite(a1, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(c1, HIGH);
  digitalWrite(d1, LOW);
  digitalWrite(e1, LOW);
  digitalWrite(f1, HIGH);
  digitalWrite(g1, HIGH);}
void nueveb(){
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);}

void setup()
{
  //Se configuran los pines
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  //Comprobamos que todos funcionan
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(200);
  //y los apagamos
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); 
  delay(1000);
  cerob();
}


void loop()
{
  //Empieza la cuenta
  ceroa();
  delay(1000);
  unoa();
  delay(1000);
  dosa();
  delay(1000);
  tresa();
  delay(1000);
  cuatroa();
  delay(1000);
  cincoa();
  delay(1000);
  seisa();
  delay(1000);
  sietea();
  delay(1000);
  ochoa();
  delay(1000);
  nuevea();
  delay(1000);
  //Cada que pase el nueve se suma 1 a esta variable 
  //para que muestre las decenas
  numero2 = numero2+1;
  if(numero2 == 1){
  unob();
  }
  else if(numero2 == 2){
  dosb();
  }
  else if(numero2 == 3){
  tresb();
  }
  else if(numero2 == 4){
  cuatrob();
  }
  else if(numero2 == 5){
  cincob();
  }
  else if(numero2 == 6){
  seisb();
  }
  else if(numero2 == 7){
  sieteb();
  }
  else if(numero2 == 8){
  ochob();
  }
  else if(numero2 == 9){
  nueveb();
  }
  //Acá regresa el número a cero para reiniciar el contador
  else if(numero2 == 10){
  cerob();
  numero2 = 0;
  }
}
//Fin del codigo, para la siguiente algo mas dificil
