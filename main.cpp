#include <stdio.h>

int main(void) {
	printf("�O���N�����ύX�������܂���");
	printf("�������Q�����܂���");
	int a,b;
	int c,d;
	printf("������1���͂��Ă�������");
	scanf_s("%d", &a);
	printf("����������1���͂��Ă�������");
	scanf_s("%d", &b);
<<<<<<< HEAD
	printf("����������1���͂��Ă�������");
	scanf_s("%d", &m);
	printf("���͂��ꂽ�����̍��v�͂�%d�ł�", a+b+c);
=======
	printf("���͂��ꂽ�����̍��v�͂�%d�ł�", a+b);
	printf("�����鐔��������1���͂��Ă�������");
	scanf_s("%d", &c);
	printf("���͂��ꂽ�����̍��v�ɓ��͂����l������������%d�ł�", (a + b)*c);
<<<<<<< HEAD
>>>>>>> origin/maemura
=======
	printf("���鐔��������1���͂��Ă�������");
	scanf_s("%d", &d);
	printf("���͂����l�Ŋ������l%d", (a + b) * c/d);
>>>>>>> Harada
	return (0);
}