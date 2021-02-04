/**
 * Решение проблемы с выводами PA11 и PA12
 * при использовании ядра https://github.com/rogerclarkmelbourne/Arduino_STM32
 * Форум https://www.stm32duino.com/
 */

#define LED_1 PA11
#define LED_2 PA12

void setup() {
  Serial.end(); // Нужно добавить эту строку, чтобы "отключить" класс Serial
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
}

void loop() {
  digitalWrite(LED_1, !digitalRead(LED_1));
  digitalWrite(LED_2, !digitalRead(LED_2));
  delay(500);
}
