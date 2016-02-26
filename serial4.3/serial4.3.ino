/********************************************************************************
**    El programa Serial 4.2 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Mostra l'estat de l'aigua respecte la temperatura.                       **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int tempAigua = 120;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if ((tempAigua >= 90) && (tempAigua < 100))
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100C");
  }
  else if (tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  }
}
// La funció Loop es va repetin cada cop.
void loop() //En aquest cas no fa res
{
}
