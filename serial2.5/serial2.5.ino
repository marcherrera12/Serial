/********************************************************************************
**    El programa Serial 2.3 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Converteix els GB a MB.                                                  **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int drive_gb = 100;
long drive_mb;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;  // Equivalencia dels MB amb GB.

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}


// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
