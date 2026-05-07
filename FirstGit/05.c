////5. while (1) 형태로 사용, while (true)형태를 변경
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
//void generateNumbers()//0~99
//{
//	int count = 0;
//
//	while (true)
//	{
//		if (count == 100) //count가 MAX(100)와 같아진다면? (조건이 참일 경우 break 실행)
//		{
//			break;//함수탈출
//		}
//
//		numbers[count] = count;
//		count++;
//	}
//}
//
//void printNumbers()//1~100
//{
//	int count = 0;
//
//	while (true)
//	{
//		if (count == 100)
//		{
//			break;
//		}
//
//		printf("[%d]Hello World!\n", numbers[count] + 1);
//		count++;
//	}
//}
//
////오답노트
///*
//은지가 쓴 count <= 100은 보통 while문의 괄호 안에 들어갈 때 어울리는 조건이야.
//
//while (count < 100) : 100보다 작은 동안에만 돌아라! (유지 조건)
//
//if (count == 100) break; : 100이 되면 당장 멈춰라! (탈출 조건)
//*/