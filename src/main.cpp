#include "mbed.h"

//#define __CORRECT_ISO_CPP_MATH_H_PROTO

DigitalOut myled(LED1);
//Serial pc(USBTX,USBRX);

float x;
float y = 0.5;
int main() {
    while(1) {
        myled = 1; // LED is ON
        wait(0.2); // 200 ms
        myled = 0; // LED is OFF
		wait(3.0); // 1 sec
		x = abs(y);
//		pc.printf("%f\n",x);
    }
}
