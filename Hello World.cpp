//0919
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	int single=1;
	int end = 50;//��ֹλ��
	int start = 1;//��ʼλ��
	int c = 1;
	int i;

	while (1) {
		if (c<start || c>end) {
			single = -single;
		}
		for (i = 1;i <= c;i++) {
			printf(" ");
		}
		printf("A");
		c += single;
		Sleep(50);
		system("cls");
	}
	return 0;
}

