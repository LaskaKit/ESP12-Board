/*
 * EXAMPLE CODE FOR LASKKIT ESP-12 BOARD
 * LED blinking of ESP-12 module (GPIO2) and message sending through Serial
 *
 * https://github.com/LasKKit/ESP12-Board
 * laskarduino.cz
 * 2021
 *
 * Compile it as "Generic ESP8266 Module"
 *
 * How to program it:
 * Push the "FLASH" button and hold it
 * Push the "RESET" button and still hold the "FLASH" button
 * Release the "RESET" button and after that also "FLASH" button, ESP-12 is in bootloader
 * Upload your code by "Upload" button in Arduino IDE
 * After the uploading, push the "RESET button and release it to achieve the leaving of bootloader
 *
 *  LASKKIT ESP-12 board kit: https://www.laskarduino.cz/laskkit-esp-12-board
 *  LASKKIT ESP-12 board plosny spoj: https://www.laskarduino.cz/laskkit-esp-12-board--plosny-spoj
 */

#define LED 2

void setup() 
{
  Serial.begin(115200); // inicializace Serial, 115200 Bd
  pinMode(LED, OUTPUT); // inicializace LED na ESP-12

}

void loop() 
{
 Serial.println("LED blinking");
  
  for(int i=0; i < 3; i++) 
  {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
  
  delay(500);

  for(int i=0; i < 1; i++) 
  {
    for(int j=0; j <= PWMRANGE;){
      analogWrite(LED, j);
      delay(1);
      j += 1;
    }
    delay(500);
    for(int j=PWMRANGE; j >= 0;)
    {
      analogWrite(LED, j);
      delay(1);
      j -= 1;
    }
  delay(500);
  }
  delay(500);
}
