#include "led.h"
#include "button.h"
#include <stdio.h>

extern int button0_count;
extern int state;

void led_all_on() {
	printf("led_all_on()\n");
}

void led_all_off() {
	printf("led_all_off()\n");
}

void led_on_up() {
	printf("led_on_up()\n");
}

void led_on_down() {
	printf("led_on_down()\n");
}

void led_keep_on_up() {
	printf("led_keep_on_up()\n");
}

void led_keep_on_down() {
	printf("led_keep_on_down()\n");
}

void led_flower_on() {
	printf("led_flower_on()\n");
}

void led_flower_off() {
	printf("led_flower_off()\n");
}

void (*led_functions1[])() = {
	led_all_on,
	led_all_off,
	led_on_up,
	led_on_down,
};
void (*led_functions2[])() = {
	led_keep_on_up
	,led_keep_on_down
};
void (*led_functions3[])() = {
	led_flower_on,
	led_flower_off
};

// 2차원 배열
void (**led_function_arrays[3])() = {
	led_functions1,
	led_functions2,
	led_functions3
};

void led_main() {
	led_function_arrays[state][button0_count]();
	// Note : ((void (*) ()) (*(*(led_function_arrays + state)+button0_count)))();
}