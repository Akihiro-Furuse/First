#include <stdio.h>

int main(void) {
	int a,b;
	int c;
	printf("������1���͂��Ă�������");
	scanf_s("%d", &a);
	printf("����������1���͂��Ă�������");
	scanf_s("%d", &b);
	printf("���͂��ꂽ�����̍��v�͂�%d�ł�", a+b);
	printf("�����鐔��������1���͂��Ă�������");
	scanf_s("%d", &c);
	printf("���͂��ꂽ�����̍��v�ɓ��͂����l������������%d�ł�", (a + b)*c);
	return (0);
}