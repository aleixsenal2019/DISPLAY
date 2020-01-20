const int A = 1;          
const int B = 2;      
const int C = 3;       
const int D = 4;        
const int E = 5;       
const int F = 6;      
const int G = 7;     
const int buttonPin = 8;     
const delay t = 500;
//********** Setup ****************************************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}
//********** Loop *****************************************************************
void loop()
{
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, LOW);      
  delay(t);                
  digitalWrite(A, LOW);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);  
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);  
  digitalWrite(G, LOW);      
  delay(t);                  
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, LOW);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);    
  digitalWrite(G, HIGH);      
  delay(t);                
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);    
  digitalWrite(G, HIGH);    
  delay(t);                
  digitalWrite(A, LOW);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);    
  delay(t);                
  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);        
  delay(t);                  
  digitalWrite(A, LOW);    
  digitalWrite(B, LOW);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);      
  delay(delayA);                
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);    
  digitalWrite(G, LOW);      
  delay(t);                
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);    
  delay(t);                
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);    
  delay(t);      
  }
