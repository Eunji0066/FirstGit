////6. 짝수만 출력
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
//	generateNumbers();
//	printNumbers();
//	return 0;
//}
//
///*--------------------------------------------------------------------------------------*/
//
//void generateNumbers()
//{
//    int count = 0;
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
//        // 배열에 담긴 숫자가 짝수인지 확인
//        if (numbers[count] % 2 == 0) 
//        {
//            printf("[%d]Hello World!\n", numbers[count] + 2 );
//        }
//
//        count++;
//    }
//}
//
////오답노트
///*
//
//
//1. 숫자를 0~99까지 채우는 곳 (저장)
//여기서는 짝수인지 검사하지 말고, 그냥 순서대로 배열을 채워줘.
//
//C
//void generateNumbers() {
//    int count = 0;
//    while (true) {
//        if (count == MAX) break;
//
//        numbers[count] = count; // 여기서 0, 1, 2... 순서대로 기차 칸을 채워!
//        count++;
//    }
//}
//2. 담긴 숫자 중 짝수만 골라 출력하는 곳 (표현)
//이미 다 채워진 배열을 나중에 열어보면서 짝수만 골라내는 거야.
//
//C
//void printNumbers() {
//    int count = 0;
//    while (true) {
//        if (count == MAX) break;
//
//        // 배열에 담긴 숫자가 짝수인지 확인!
//        if (numbers[count] % 2 == 0) {
//            printf("[%d]Hello World!\n", numbers[count]);
//        }
//
//        count++;
//    }
//}
//
//
//
//*/