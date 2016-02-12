/********************************************************************************
**    El programa Serial 2.1 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Realitza les següents operacions                                         **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int a = 5;
int b = 10;
int c = 20;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps

    Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // suma
  Serial.println(a + b);
  
  Serial.print("a * c = ");       // multiplicació
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divisió
  Serial.println(c / b);

  Serial.print("c % b = ");       // modul
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta
  Serial.println(b - c);

}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
