/********************************************************************************
**    El programa Serial 2.10 serveix perque l'arduino es comuniqui amb tu.    **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Realitza la operació 3/2. Mostra la part entera i la part decimal.       **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

float a = 3;
float b = 2;
float d;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
