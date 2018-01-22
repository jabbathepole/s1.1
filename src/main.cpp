#include <mbed.h>

void on(DigitalOut LED) {
  LED.write(0);
}
void off(DigitalOut LED) {
  LED.write(1);
}
void flash(DigitalOut LED) {
  on(LED);
  wait(0.5);
  off(LED);
  wait(0.5);
}

int main() {

    const DigitalOut RED(PTB22);
    const DigitalOut GREEN(PTE26);
    const DigitalOut BLUE(PTB21);

    while(1) {
      flash(RED);
      flash(GREEN);
      flash(BLUE);
    }
}
