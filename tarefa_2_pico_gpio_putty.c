#include <stdio.h>
#include "pico/stdlib.h"

#define LED_RED_PIN 13
#define LED_GREEN_PIN 11
#define LED_BLUE_PIN 12
#define BTN_A_PIN 5

void set_gpio(uint gpio, bool direction, bool is_pull_up_active) {
    gpio_init(gpio);
    gpio_set_dir(gpio, direction);

    if (is_pull_up_active) {
        gpio_pull_up(gpio);
    }
}

int main() {
    stdio_init_all();

    set_gpio(LED_RED_PIN, GPIO_OUT, false);    
    set_gpio(LED_GREEN_PIN, GPIO_OUT, false);    
    set_gpio(LED_BLUE_PIN, GPIO_OUT, false);    
    set_gpio(BTN_A_PIN, GPIO_IN, true);    
}
