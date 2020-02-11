#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int player;
	int com;
	int answer = 0;
	printf("가위 바위 보!! \n");
	printf("1. start , 2. stop ==> ");
	scanf_s("%d", &answer);

	if (answer == 1) {
		printf("start \n");
	}
	else if (answer == 2) {
		printf("exit");
		exit(0);
	}
	printf("규칙 설명!! \n");
	printf("");
	printf("\n \n");
}