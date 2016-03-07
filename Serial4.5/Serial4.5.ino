/********************************************************************************
**    El programa Serial 4.5 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Mostra l'estat d'una variable.                                           **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int sensorReading = 4;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    //En cas que la variable valgui 0.
    Serial.println("dark");
    break;
  case 1:    //En cas que la variable valgui 1.
    Serial.println("dim");
    break;
  case 2:    //En cas que la variable valgui 2.
    Serial.println("medium");
    break;
  case 3:    //En cas que la variable valgui 3.
    Serial.println("bright");
    break;
  default:   //En cas que la variable valgui qualsevol altre valor.
    Serial.println("... I don't know!!!");
  } 
}

// La funció Loop es va repetin cada cop.
void loop() //En aquest cas no fa res
{
}
