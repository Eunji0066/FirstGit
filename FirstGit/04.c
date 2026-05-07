////4. while 반복문 사용
//
//#include <stdio.h>
//#define MAX 100
////int count = 0;
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
//void generateNumbers()//0~99
//{
//	int count = 0;
//
//	while (count < MAX)
//	{
//		numbers[count] = count;
//		count++;
//	}
//}
//
//void printNumbers()//1~100
//{
//	int count = 0;
//
//	while (count < MAX)
//	{
//		printf("[%d]Hello World!\n", numbers[count] + 1);
//		count++;
//	}
//}
//
////오답노트
///*
//현재 코드의 문제점 (디버깅)
//
//증감식(count++)의 부재: 
//for문은 괄호 안에 count++가 있어서 자동으로 숫자가 올라가지만,
//while문은 몸통 안에서 직접 숫자를 올려주지 않으면 count는 영원히 0에 머물러서 무한 루프가 돌게 돼.
//
//전역 변수 count의 재사용: 
//count를 함수 밖(전역)에 하나만 만들어두면, generateNumbers에서 이미 100까지 올라가 버려.
//그래서 printNumbers를 실행할 때는 이미 count가 100이라서 while (count < MAX) 조건이 바로 False가 되어 아무것도 출력되지 않아.
//
//for문과 while문은 사실 똑같은 일을 할 수 있지만, 구조가 조금 달라.
//
//for(초기화; 조건; 증감): 한 줄에 다 있어서 까먹을 일이 별로 없어.
//
//while(조건): 조건만 체크하기 때문에, "어디서 시작할지(초기화)"와 "어떻게 변할지(증감)"를 은지가 직접 챙겨줘야 해.
//
//
//*/