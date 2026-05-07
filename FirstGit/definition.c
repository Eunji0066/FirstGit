/*#include "header.h"

void playgame() {
    char userchoice[10];
    int comchoice;

    printf("가위 바위 보 중에서 하나를 입력하세요 ");
    scanf("%s", userchoice);

    comchoice = rand() % 3 + 1;

    if (strcmp(userchoice, "가위") == 0) {
        if (comchoice == 1) {
            printf("나 가위 컴퓨터 가위 비겼습니다\n");
        }
        else if (comchoice == 2) {
            printf("나 가위 컴퓨터 바위 졌습니다\n");
        }
        else if (comchoice == 3) {
            printf("나 가위 컴퓨터 보 이겼습니다\n");
        }
    }
    else if (strcmp(userchoice, "바위") == 0) {
        if (comchoice == 1) {
            printf("나 바위 컴퓨터 가위 이겼습니다\n");
        }
        else if (comchoice == 2) {
            printf("나 바위 컴퓨터 바위 비겼습니다\n");
        }
        else if (comchoice == 3) {
            printf("나 바위 컴퓨터 보 졌습니다\n");
        }
    }
    else if (strcmp(userchoice, "보") == 0) {
        if (comchoice == 1) {
            printf("나 보 컴퓨터 가위 졌습니다\n");
        }
        else if (comchoice == 2) {
            printf("나 보 컴퓨터 바위 이겼습니다\n");
        }
        else if (comchoice == 3) {
            printf("나 보 컴퓨터 보 비겼습니다\n");
        }
    }
    else {
        printf("잘못된 입력입니다\n");
    }
}
*/