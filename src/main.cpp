// #include <Arduino.h>

// #define LED_ESP 2
// #define RLY1 12
// #define RLY2 13  


// const int relayPins[] = {RLY1, RLY2};
// const int numRelays = sizeof(relayPins) / sizeof(relayPins[0]);
// const int delayTime = 1000;  // Waktu delay dalam milidetik

// void setup() {
//   pinMode(LED_ESP, OUTPUT);
//   for (int i = 0; i < numRelays; i++) {
//     pinMode(relayPins[i], OUTPUT);
//     digitalWrite(relayPins[i], LOW);  // Matikan semua relay pada awal
//   }
//   digitalWrite(LED_ESP, LOW);  // Matikan LED pada awal
// }

// void loop() {
//   digitalWrite(LED_ESP, HIGH);  // Nyalakan LED saat RLY1 aktif
//   for (int i = 0; i < numRelays; i++) {
//     digitalWrite(relayPins[i], HIGH);  // Nyalakan relay
//     delay(delayTime);

//     digitalWrite(relayPins[i], LOW);  // Matikan relay
//   }
//   digitalWrite(LED_ESP, LOW);  // Matikan LED setelah RLY4 mati
//   delay(delayTime);
// }



#include <Arduino.h>

#define LED_ESP 2
#define RLY1 14
#define RLY2 12


const int relayPins[] = {RLY1, RLY2};
const int numRelays = sizeof(relayPins) / sizeof(relayPins[0]);
const int delayTime = 1000;  // Waktu delay dalam milidetik

void setup() {
  pinMode(LED_ESP, OUTPUT);
  for (int i = 0; i < numRelays; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW);  // Matikan semua relay pada awal
  }
  digitalWrite(LED_ESP, LOW);  // Matikan LED pada awal
}

void loop() {
  digitalWrite(LED_ESP, HIGH);  // Nyalakan LED saat RLY1 aktif
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);  // Nyalakan relay
    delay(delayTime);

    digitalWrite(relayPins[i], LOW);  // Matikan relay
  }
  digitalWrite(LED_ESP, LOW);  // Matikan LED setelah RLY4 mati
  delay(delayTime);
}