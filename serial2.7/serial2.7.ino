/********************************************************************************
**    El programa Serial 2.7 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**                                                                             **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int test = 32767;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps

  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);
}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
