#include <stdio.h>

int main(void) {
	int a,b;
	int c;
	printf("数字を1つ入力してください");
	scanf_s("%d", &a);
	printf("数字をもう1つ入力してください");
	scanf_s("%d", &b);
	printf("入力された数字の合計はは%dです", a+b);
	printf("かける数字をもう1つ入力してください");
	scanf_s("%d", &c);
	printf("入力された数字の合計に入力した値をかけた数は%dです", (a + b)*c);
	return (0);
}