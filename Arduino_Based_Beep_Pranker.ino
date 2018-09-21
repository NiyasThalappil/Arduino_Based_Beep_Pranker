/*
 * Arduino Beep Prank
 *
 * 
 * by Niyas Thalappil
 * 
 * www.youtube.com/c/NiyasThalappil
 * NiyazThalappil@gmail.com
 *
 */

long myTime = 0;                                     
                                                          
void setup() {

randomSeed(analogRead(0));                                
pinMode(7,OUTPUT);                                      
}

void loop() {

myTime = random(60000,21600000);                         
delay(myTime);                                            
digitalWrite(7,HIGH);                                    
delay(50);                                              
digitalWrite(7,LOW);                                      

}
