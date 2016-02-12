/********************************************************************************
**    El programa Serial 1.1 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    En aquest cas només ho escriu un cop                                     **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************


// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
  Serial.println("Hello world!"); // Escriure amb un salt de linia
}

// La funció Loop es va repetin cada cop.
void loop() {
 //En aquest cas el loop no fa res
}
