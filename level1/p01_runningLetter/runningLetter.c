#include <stdio.h>
#include <stdlib.h>


void main() {
    int n = 0;
    const int right_border = 105, left_border = 0;
<<<<<<< HEAD
    char value = 1;//valueΪ1ʱ�����ƶ������������ƶ� 
=======
    char value = 1;//value为1时向右移动，否则向左移动 
>>>>>>> 425ab15ca2ecaf59965d1fb7f1c85c99e123bc53
    while (1) {
        if (value) {
            for (int i = 0; i < n; i++) {
                printf(" ");
            }
            printf("Running Word");
            n++;
<<<<<<< HEAD
            system("cls");//���� 
=======
            system("cls");//清屏 

>>>>>>> 425ab15ca2ecaf59965d1fb7f1c85c99e123bc53
            if (n == right_border) {
                value = 0;
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                printf(" ");
            }
            printf("Running Word");
            n--;
            system("cls");
            if (n == left_border) {
                value = 1;
            }
        }
    }
}

