#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int ran;
	int answer = 0;

	printf("1. start , 2. stop ==> ");
	scanf_s("%d", &answer);
	
	if (answer == 1) {
		printf("start \n");
	}
	else if (answer == 2) {
		printf("exit");
		exit(0);
	}
	printf("\n \n");
	for (answer; answer == 1;) {
		srand(time(NULL));
		ran = (rand() % 6) + 1;
		printf("\n dice ==> %d \n \n", ran);
		printf("restart ==> 1 \n");
		printf("end ==> 2 \n");
		scanf_s("%d", &answer);
	}
	return 0;
}