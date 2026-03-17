#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int grade[10] = { 0 };
	int total = 0;
	int average;
	for (int i = 0; i < 10; i++) {
		grade[i] = rand() % 101;
		printf("학생%d의 점수: %d\n", i + 1, grade[i]);
		total += grade[i];
	}
	average = total / 10;
	printf("10명의 평균 점수 = %d", average);
	return 0;
}
