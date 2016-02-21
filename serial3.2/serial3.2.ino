/********************************************************************************
**    El programa Serial 3.2 serveix perque l'arduino es comuniqui amb tu.     **
**    L'arduino ho fa amb el monitor del programa.                             **
**    Mostra números en ASCII, DEC, BIN, HEX i OCT. Des del 33 fins al 126.    **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int thisByte = 33; 

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  Serial.begin(9600);       // Engega la llibreria serial a la velocitat 9600 bps
  Serial.println("ASCII Table ~ Character Map"); 
}

// La funció Loop es va repetin cada cop.
void loop() {
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // Quan arriba a 126 para de incrementar
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // incrementa el valor en 1
 }
