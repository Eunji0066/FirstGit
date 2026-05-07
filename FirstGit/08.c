 //8. 함수 형태로 변경 signature 함수원형
//홀수: 1~99, 짝수: 0~98

#include <stdio.h>

#define MAX 100
#define true 1
#define false 0

int numbers[MAX];

void generateNumbers();
void print_EvenOdd_with_N(int select, int maxCount);

//print: 출력하라 / EvenOdd: 짝수(Even) 혹은 홀수(Odd)를 / with N: N개(사용자가 지정한 숫자)와 함께 (또는 N번만큼)
//N번만큼 짝수 혹은 홀수를 출력하는 기능


int main()
{
    generateNumbers();
    print_EvenOdd_with_N(0, 100);
    return 0;
}

/*--------------------------------------------------------------------------------------*/

void print_EvenOdd_with_N(int select, int maxCount) 
{
    /*선언하기*/ int count = 0;

    while (true)
    {
        //탈출 조건 적기
        if (count == maxCount) break; //count의 값이 maxCount의 값과 같아질 때 탈출

        //짝수(0)를 입력했을 때
        if (select == 0)
        {
            if (numbers[count] % 2 == 0) { printf("[Even: %d]Hello, World!\n", numbers[count]); }
        }
        
        //홀수(1)를 입력햇을 때
        else if (select == 1)
        {
            if (numbers[count] % 2 == 1) { printf("[Odd: %d]Hello, World!\n", numbers[count]); }
        }
        
        count++;
    }

}

void generateNumbers() //numbers[] 배열에 횟수 저장
{
    int count = 0;
    while (true)
    {
        if (count == MAX) break;

        numbers[count] = count;
        count++;
    }
}

