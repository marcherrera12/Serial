/********************************************************************************
**    El programa Serial 2.8 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Calcula els MB i KB teòrics(binari) i reals(decimal) d'un HD de 100GB.   **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb ;
  drive_mb = drive_mb * 1024 ;

  drive_kb = drive_mb * 1024 ;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  real_drive_mb = drive_gb ;
  real_drive_mb = real_drive_mb * 1000 ;

  real_drive_kb = real_drive_mb * 1000 ;
  
  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  Serial.print("You are missing ");
  Serial.print(drive_kb -  real_drive_kb);
  Serial.println(" Kilobytes!");

}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
