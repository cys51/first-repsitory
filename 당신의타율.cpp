#include <stdio.h>

int main(void)
{
	int t;
	int hits;
	double avg = 0.0;
	double std = 0.3;

	printf("����� Ÿ���� ��Ÿ���� �Է��ϼ���\n");
	scanf("%d %d", &t, &hits);
	avg = (double)hits / t;
	printf("����� Ÿ����%.3f�Դϴ�.\n", avg);
	if (avg > std) {
		printf("����� ���ξ߱��� �����Ҽ� �ִ� �Ǹ��� Ÿ���Դϴ�.\n");
	}
	else if (avg < std){
		printf("�ƽ����� ����� ������ �����ؾ��� Ÿ���Դϴ�.\n");
	}
	return 0;
}
