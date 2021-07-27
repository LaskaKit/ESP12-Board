/*
 * VZOROVÝ KÓD PRO LASKKIT ESP-12 BOARD
 * Blikání vestavěnou LED na ESP-12 (GPIO2) a posílání zpráv přes Serial
 * 
 * https://github.com/LasKKit/ESP12-Board
 * laskarduino.cz
 * 2021
 * 
 * Kompilujte jako "Generic ESP8266 Module"
 * 
 * Postup:
 * Stiskněte tlačítko "FLASH" a držte
 * Stiskněte tlačítko "RESET", stále držte "FLASH"
 * Uvolněte tlačítko "RESET" a poté i "FLASH"
 * Klikněte na tlačítko "Nahrát" v Arduino IDE
 * Po nahrání kódu stiskněte tlačítko RESET a uvolněte, kód se spustí
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
 Serial.println("Blikani LED");
  
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
