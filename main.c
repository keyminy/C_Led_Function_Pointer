#include <stdio.h>
#include "led.h"
#include "button.h"

int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5}
	};
	int* pArr = &arr[1];
	// ��� ������ ������ 2���� ù��° ���Ҹ� ����� �� �־�?
	// 2���� �迭�� �̸��� 1���� �迭�� �ּҰ��̴�.
	printf("%d\n", arr[1][1]); // 5

	led_main(); // led_flower_off()
	return 0;
}