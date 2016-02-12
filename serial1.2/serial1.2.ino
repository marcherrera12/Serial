/********************************************************************************
**    El programa Serial 1.2 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    En aquest cas ho escriu cada 1 segon sense salt de linia.                **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************


// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
}

// La funció Loop es va repetin cada cop.
void loop() {
  Serial.print("Hello world!"); // Escriure sense salt de linia
  delay(1000); // Espera 1s = 1000 ms
}
