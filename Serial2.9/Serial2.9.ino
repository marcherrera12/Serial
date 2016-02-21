/********************************************************************************
**    El programa Serial 2.9 serveix perquè l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Realitza la operació 3/2. Nomès mostra la part entera.                   **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int a = 3;
int b = 2;
int d;

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
