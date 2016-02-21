/********************************************************************************
**    El programa Serial 4.1 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Quan temperatura de l'aigua sigui superior a 100, mostrara un missatge.  **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int tempAigua = 80; 

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
  if ( tempAigua > 100)
  {
  Serial.print("Aigua supera els 100C, esta bullint!");
  } 
 
}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas loop no fa res
 }
