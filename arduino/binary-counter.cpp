
// October 1, 2025
//
// learned how arduino works
// with LEDs and wires and resistors
//
// this is binary counter app
// which starts to show numbers in binary form
// by lighting LEDs
//
// everytime u add new pin and led,
// its going to increase the size of
// numbers to show as well
//
// the tricky part of this code
// is bit manipulation part
//
// >> shifting
// & anding
//
// >> this means moving everything to the right side
// like
//
// 6 = 110
// 6 >> 0 is 110
// 6 >> 1 is 011
// 6 >> 2 is 001
//
// & means if 2 numbers are 1 then it will be 1
// 110
// &
// 100
// =
// 100
//
// but in our case we will and it with 1 always
// and this will always gives 0 or 1
// which we need as HIGH and LOW
//
// emm, yea, ig i did not understood
// BIT OPS yet fully
// its just too hard to think in it
//

int ledPins[] = {10, 11, 12};

void setup() {
  for (int ledPin : ledPins) {
    pinMode(ledPin, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < pow(2, sizeof(ledPins)); i++) {
    for (int b = 0; b < sizeof(ledPins); b++) {
      digitalWrite(ledPins[b], (i >> b) & 1);
    }

    delay(1000);
  }
}

