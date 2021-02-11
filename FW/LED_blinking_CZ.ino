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
 */

void setup() {
  Serial.begin(115200); // inicializace Serial, 115200 Bd
  pinMode(2, OUTPUT); // inicializace LED na ESP-12

}

void loop() {
  Serial.println("Blikani LED");
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  delay(500);

}
