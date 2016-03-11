/********************************************************************************
**    El programa Serial 4.8 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Estructura while.                                                        **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int comptar = 11;
int i = 0;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}

// La funció Loop es va repetin cada cop.
void loop() //En aquest cas no fa res
{
}
