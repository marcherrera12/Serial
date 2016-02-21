/********************************************************************************
**    El programa Serial 3.1 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Mostra el número 64 en ASCII, DEC, BIN, HEX i OCT.                       **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int num = 64;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
  
  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
