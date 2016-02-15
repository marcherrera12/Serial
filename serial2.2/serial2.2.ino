/********************************************************************************
**    El programa Serial 2.2 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Calcula la hipotenusa d'un triangle rectangle.                           **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int a = 3;
int b = 4;
int h;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps

    Serial.println("Lets calculate a hypoteneuse");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h = sqrt(pow(a, 2)+pow(b, 2)));
  
}

// La funció Loop es va repetin cada cop.
void loop() {
//En aquest cas no fa res
 }
