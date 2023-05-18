#include <stdio.h>

int main(void) {
	printf("前村康生が変更を加えました");
	printf("小島が参加しました");
	int a,b;
	int c,d;
	printf("数字を1つ入力してください");
	scanf_s("%d", &a);
	printf("数字をもう1つ入力してください");
	scanf_s("%d", &b);
<<<<<<< HEAD
	printf("数字をもう1つ入力してください");
	scanf_s("%d", &m);
	printf("入力された数字の合計はは%dです", a+b+c);
=======
	printf("入力された数字の合計はは%dです", a+b);
	printf("かける数字をもう1つ入力してください");
	scanf_s("%d", &c);
	printf("入力された数字の合計に入力した値をかけた数は%dです", (a + b)*c);
<<<<<<< HEAD
>>>>>>> origin/maemura
=======
	printf("割る数字をもう1つ入力してください");
	scanf_s("%d", &d);
	printf("入力した値で割った値%d", (a + b) * c/d);
>>>>>>> Harada
	return (0);
}