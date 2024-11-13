#include <stdio.h>
#include "led.h"
#include "button.h"

int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5}
	};
	int* pArr = &arr[1];
	// 어떻게 포인터 변수로 2행의 첫번째 원소를 출력할 수 있어?
	// 2차원 배열의 이름은 1차원 배열의 주소값이다.
	printf("%d\n", arr[1][1]); // 5

	led_main(); // led_flower_off()
	return 0;
}