/********************************************************************************
**    El programa Serial 1.4 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    En aquest cas ho escriura un sol cop.                                    **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************


// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar:"); // Escriure amb un salt de linia
  Serial.println("1. Comprovar nuemro de tarjeta de credit"); // Escriure amb un salt de linia
  Serial.println("2. Comprovar numero de compte bancari"); // Escriure amb salt de linia
  Serial.println ("3. Buscar un digit perdut de tarjeta de credit"); // Escriure amb salt de linia 
}

// La funció Loop es va repetin cada cop.
void loop() {
  // En aquest cas no fa res
}
