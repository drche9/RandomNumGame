#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int player=0;
	int com=0;
	int answer = 0;
	int random;
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
	printf("\n ------------------ \n");
	printf("규칙 설명!! \n");
	printf("사용자는 가위/바위/보 중 하나를 입력한다. \n");
	printf("!!! : 가위 ==> 1 \n바위 ==> 2 \n보 ==> 3 \n");
	printf("동시에 컴퓨터도 하나를 출력한다.\n");
	printf("가위 > 보 / 보 > 주먹/ 주먹 > 가위 \n");
	printf("컴퓨터를 이기면 승리! \n");
	printf("아니라면 패배... \n");
	printf("\n ------------------ \n");
	printf("\n \n");

	for (answer; answer == 1;) {
		for (answer; answer == 1;) {
			printf("player ==> ");
			scanf_s("%d", &player);
			srand(time(NULL));
			com = (rand() % 3) + 1;
			printf("\ncomputer ==> %d \n \n",com);
			if (player == 1 && com == 3) {
				printf("your win!\n");
			}
			else if (player == 1 && com == 2) {
				printf("your Defeat...\n");
			}
			else if (player == 2 && com == 1) {
				printf("your win!\n");
			}
			else if (player == 2 && com == 3) {
				printf("your Defeat...\n");
			}
			else if (player == 3 && com == 2) {
				printf("your win!\n");
			}
			else if (player == 3 && com == 1) {
				printf("your Defeat...\n");
			}
			else if (player == com) {
				printf("Emptied!! \n");
			}
			printf("\n -------------- \n");
			printf("1. restart  2.exit ");
			printf("\n replay? ==> ");
			scanf_s("%d", &answer);
			if (answer == 1) {
				printf("\nrestart \n \n");
			}
			else if (answer == 2) {
				printf("exit\n");
				exit(0);
			}
			else {
				printf("잘못된 입력 \n \n");
				exit(0);
			}
			printf("\n -------------- \n");
			
		}
	}
	return 0;
}
//수정 PLZ
//3 이상의 숫자를 입력하면 종료되는것*
//if 세블럭으로 나눠서 코딩하기 