#include <time.h>

void delay(int n) {
    int us = n; // microseconds
    clock_t start_time = clock();
    while (clock() < start_time + (us * CLOCKS_PER_SEC / 1000000));
}
