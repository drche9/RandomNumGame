#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int player = 0;
	int com = 0;
	int random;
	int answer = 0;
	printf("���� ���� ��!! \n");
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
	printf("��Ģ ����!! \n");
	printf("����ڴ� ����/����/�� �� �ϳ��� �Է��Ѵ�. \n");
	printf("!!! : ���� ==> 1 \n���� ==> 2 \n�� ==> 3 \n");
	printf("���ÿ� ��ǻ�͵� �ϳ��� ����Ѵ�.\n");
	printf("���� > �� / �� > �ָ�/ �ָ� > ���� \n");
	printf("��ǻ�͸� �̱�� �¸�! \n");
	printf("�ƴ϶�� �й�... \n");
	printf("\n ------------------ \n");
	printf("\n \n");
	for (answer; answer == 1;) {
		printf("player == > ");
		scanf_s("%d", &player);
		srand(time(NULL));
		com = (rand() % 3) + 1;
		printf("computer == > %d\n",com);
		if (player == com) {
			printf("�����ϴ�!!");
		}
		else if (player == 1 && com == 3 || player == 2 && com == 1 || player == 3 && com == 2) {
			printf("�̰���ϴ�!");
		}
		 else if (player == 1 && com == 2 || player == 2 && com == 3 || player == 3 && com == 1) {
			printf("�����ϴ�...");
		}
		printf("\n");
		printf("1. restart 2.exit ==>");
		scanf_s("%d", &answer);
		printf("\n");
	}
	return 0;
}