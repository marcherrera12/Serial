/********************************************************************************
**    El programa Serial 4.6 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Estructura for.                                                          **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int comptar = 11;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // iniciar llibreria Serial a 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}

// La funció Loop es va repetin cada cop.
void loop() //En aquest cas no fa res
{
}
