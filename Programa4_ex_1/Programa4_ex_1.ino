/*************************************************************************
**                                                                      **
**                            Progrema 4 ex. 1                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************
int duration;
int frequency;
int pin9 = 9;  


//****** setup ***********************************************************
void setup() {
}


//****** Loop ************************************************************
void loop() {
 duration = analogRead(A0)*10;
 frequency = analogRead(A1);// Configuració d'entrades analògiques
  
  tone(pin9,frequency,duration);

   delay(1000);
}
