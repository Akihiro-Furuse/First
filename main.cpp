#include <stdio.h>

int main(void) {
	int a;
	printf("数字を1つ入力してください");
	scanf_s("%d", &a);
	printf("入力された数字は%dです", a);
	return (0);
}