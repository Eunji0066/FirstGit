#include "header.h"

int main() {
    char retry[10];

    srand(time(NULL));

    while (1) {
        playgame();

        printf("계속하시겠습니까, 그만하시겠습니까 ");
        scanf("%s", retry);

        if (strcmp(retry, "그만") == 0) {
            break;
        }
    }

    return 0;
}
