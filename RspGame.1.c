#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int player;
	int com;
	int random;
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
	
	printf("player == > ");
}