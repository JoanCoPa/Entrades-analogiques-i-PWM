/*************************************************************************
**                                                                      **
**                            Progrema 7 ex. 1                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************
const int pin = 9;
int note = 1047;
int velocitat = 10;

//****** setup ***********************************************************
void setup() {
}

//****** Loop ************************************************************
void loop() {
punt();
punt();
punt();
punt();  
  espaiL(); //Lletra H en morse
  
punt(); 
  espaiL(); //Lletra E en morse
  
punt();
ratlla();
punt();
punt(); 
  espaiL(); //Lletra L en morse

punt();
ratlla();
punt();
punt(); 
  espaiL(); //Lletra L en morse
   
ratlla();
ratlla();
ratlla(); 
  espaiP(); //Lletra O en morse

ratlla();
ratlla();
  espaiL(); //Lletra M en morse

punt();
ratlla();
punt();
  espaiP(); // Lletra R en morse

punt();
ratlla();
ratlla();
ratlla();
  espaiL(); //Lletra J en morse

ratlla();
ratlla();
ratlla();
  espaiL(); //Lletra O en morse

punt();
  espaiP(); //Lletra E en morse

punt();
punt();
punt();
punt(); 
  espaiL(); //Lletra H en morse

ratlla();
ratlla();
ratlla();
  espaiL(); //Lletra O en morse

punt();
ratlla();
ratlla();
  espaiP(); //Lletra W en morse

punt();
ratlla();
  espaiL(); //Lletra A en morse

punt();
ratlla();
punt();
  espaiL(); //Lletra R en morse

punt();
  espaiP(); //Lletra E en morse

ratlla();
punt();
ratlla();
ratlla();
  espaiL(); //Lletra Y en morse

ratlla();
ratlla();
ratlla();
  espaiL(); //Lletra O en morse

punt();
punt();
ratlla();
  espaiP(); //Lletra U en morse
}

//Funcions pel loop O_o"
void punt(){
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla(){
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL(){  
  delay(2*(1000/velocitat)); //Espai entre les lletres. 
}

void espaiP(){   
  delay(6*(1000/velocitat)); //Espai entre paraules.
}
