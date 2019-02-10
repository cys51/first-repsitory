#include <stdio.h>

int main(void)
{
	int t;
	int hits;
	double avg = 0.0;
	double std = 0.3;

	printf("당신의 타수와 안타수를 입력하세요\n");
	scanf("%d %d", &t, &hits);
	avg = (double)hits / t;
	printf("당신의 타율은%.3f입니다.\n", avg);
	if (avg > std) {
		printf("당신은 프로야구에 진출할수 있는 훌륭한 타자입니다.\n");
	}
	else if (avg < std){
		printf("아쉽지만 당신은 약점을 보완해야할 타자입니다.\n");
	}
	return 0;
}
