////7. 홀수 조건식으로 짝수만 출력
//
//#include <stdio.h>
//#define MAX 100
//#define true 1
//#define false 0
//
//void generateNumbers(); // 숫자를 100번 세서 배열에 저장하는 함수 (로직 분리)
//void printNumbers(); //배열에 담긴 내용을 출력만 하는 함수(표현 분리)
//
//int numbers[MAX];
//
//int main()
//{
//    generateNumbers();
//    printNumbers();
//    return 0;
//}
//
///*--------------------------------------------------------------------------------------*/
//
//void generateNumbers()
//{
//    int count = 1; //홀수 조건식으로 변경
//    while (true)
//    {
//        if (count == MAX) break;
//
//        numbers[count] = count;
//        count++;
//    }
//}
//
//void printNumbers()
//{
//    int count = 0;
//    while (true)
//    {
//        if (count == MAX) break;
//
//        // 배열에 담긴 숫자가 홀수인지 확인
//        if (!(numbers[count] % 2 == 1))
//        {
//            printf("[%d]Hello World!\n", numbers[count]);
//        }
//
//        count++;
//    }
//}