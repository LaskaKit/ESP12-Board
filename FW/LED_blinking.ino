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
 */

void setup() {
  Serial.begin(115200); // initialization of Serial, 115200 Bd
  pinMode(2, OUTPUT); // initialization of LED na ESP-12
}

void loop() {
  Serial.println("LED is blinking");
  for(i=0; i < 3; i++) {
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  }
  
  delay(500);

  for(i=0; i < 1; i++) {
    for(j=0; j <= PWMRANGE;){
      analogWrite(led, j);
      delay(1);
      j += 1;
    }
    delay(500);
    for(j=PWMRANGE; j >= 0;){
      analogWrite(led, j);
      delay(1);
      j -= 1;
    }
  delay(500);
  }
  delay(500);
}
