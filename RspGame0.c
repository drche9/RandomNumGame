#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int player=0;
	int com=0;
	int answer = 0;
	int random;
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
				printf("�߸��� �Է� \n \n");
				exit(0);
			}
			printf("\n -------------- \n");
			
		}
	}
	return 0;
}
//���� PLZ
//3 �̻��� ���ڸ� �Է��ϸ� ����Ǵ°�*
//if �������� ������ �ڵ��ϱ� 