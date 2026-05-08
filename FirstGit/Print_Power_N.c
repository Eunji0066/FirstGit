////0~N까지 N 제곱을 출력하는 함수
//#include <stdio.h>
//#include <limits.h> //오버플로우 체크를 위한 INT_MAX 상수가 들어있는 라이브러리
//#define true 1
//#define false 0
//
//unsigned int print_power_with_N(int base, int power);
//
//int main()
//{
//	print_power_with_N(2, 32);
//	return 0;
//}
//
//unsigned int print_power_with_N(int base/*밑*/, int power/*지수*/)
//{
//	unsigned int square_result = 1;
//	int count = 0;
// 
//	while (true) // for>while문으로 변경
//	{
//		printf("%d의 %d제곱 : %u \n", base, count, square_result); //제곱될 수(base), 제곱할 횟수, 제곱된 수(basesquare)
//		
//		/*오버플로우, 제곱 횟수 체크*/
//		if (count == power || (square_result > (square_result * base))) break;
//
//		square_result = (square_result*base);
//		count++;
//	}
//	return square_result;
//}
//
////----------------------------------------------------------------------------------------------------
//
////오답노트
//
////include <stdio.h>
////
////int print_power_with_N(int base);
////
////int main()
////{
////
////	print_power_with_N(2);
////}
////
////int print_power_with_N()
////{
////	int count = 0; //count 선언 및 초기화
////	int basesquare = base * base; //basesquare는 base를 제곱하는 연산식
////
////	for (int basesquare = 0; basesquare < 2147483641;) // basesquare 초기화, 오버플로우가 나지 않게 조건식 지정
////	{
////		printf("[%d] %d의 %d제곱 : %d", count, base, count, basesquare); //숫번, 제곱될 수(base), 제곱할 횟수, 제곱된 수(basesquare)
////		base* base; //제곱 연산식
////	}
////}
//
///*
//1. 함수 선언과 정의의 불일치
//문제: 위에서는 int print_power_with_N(int base)라고 인자를 받는다고 했는데,
//아래 정의부에서는 int print_power_with_N()라고 인자(int base)를 빼먹었어. 
//이렇게 되면 컴퓨터가 "어떤 숫자를 제곱하라는 거야?"라고 길을 잃게 돼.
//
//2. '제곱' 계산의 오해문제: base * base는 단순히 입력받은 수의 2제곱만 계산해.
//우리가 원하는 건 $base^0, base^1, base^2, base^3...$ 처럼 계속 곱해나가는 과정이지?
//해결: 반복문이 한 번 돌 때마다 이전 결과값에 다시 base를 곱해주는 방식이 필요해.
//
//3. 무한 루프와 증감식
//문제: for문의 세 번째 칸(증감식)이 비어있고,
//안쪽의 base * base;는 계산만 할 뿐 결과를 어디에도 저장하지 않아. 그래서 basesquare 값이 변하지 않아 무한 루프에 빠질 거야.
//
//질문: for문보다 while문이 조금 더 적합한가요?
//
//2의 제곱을 구할 때랑, 10의 제곱을 구할 때 오버플로우가 발생하는 count(제곱 횟수)는 서로 달라.
//
//2의 제곱: 약 31번 정도 돌아야 터짐.
//
//10의 제곱: 약 9번만 돌아도 터짐.
//
//for문을 쓰려면 for (int i = 0; i < ?; i++) 저 물음표 자리에 숫자를 미리 써야 하는데, 우리는 언제 터질지 미리 알 수가 없잖아? 
//반면에 while(1)이나 while(true)를 쓰면 "일단 계속 곱해나가다가, 오버플로우 조건이 되면 break로 탈출해!"라는 로직을 짜기가 훨씬 수월해지는 거지.
//
//질문: || 은 무슨 기호인가요? 그리고 제곱을 구하는데 ++ 연산자가 꼭 쓰여야 하나요?
//
//||: 논리합 연산자(OR) / "제곱 계산 자체"에는 필요 없지만, "지금이 몇 제곱인지 알려주는 숫자(지수)"를 관리하기 위해 꼭 필요해!
//
//
//----------------------------------------------------------------------------------------------------
//
//unsigned int print_power_with_N(int base, int power)
//{
//	unsigned int result = base;
//	unsigned int square_result = result * base; //제곱식의 결과를 저장하는 함수
//	int count = 0;
//
//	while (true) // for>while문으로 변경
//	{
//		printf("%d의 %d제곱 : %u \n", base, count, square_result); //숫번, 제곱될 수(base), 제곱할 횟수, 제곱된 수(basesquare)
//
//		//오버플로우, 지수 체크
//		if (result > 4294967295 || result < 0 || result >(result * base) * power)
//		{
//			break;
//		}
//
//		square_result* base;
//		count++;
//	}
//}
//
//1. "계산만 하고 저장하지 않았어" (가장 큰 이유!)
//코드 아래쪽에 있는 square_result * base; 줄을 봐봐.
//컴퓨터는 이 줄을 읽고 곱셈 계산은 성실하게 했어. 하지만 그 결과값을 다시 상자(square_result)에 담으라는 명령이 없어서, 계산하고 바로 버려버린 거야!
//
//수정 전: square_result * base; (계산만 함)
//
//수정 후: square_result = square_result * base; (계산해서 다시 저장!)
//
//
//2. unsigned int는 음수가 될 수 없어
//은지가 조건식에 result < 0을 넣었지? 그런데 unsigned int는 태생이 '부호 없는(0과 양수만 있는) 정수'야. 그래서 얘는 아무리 작아져도 절대로 0보다 작아질 수 없어.
//
//오버플로우 특징: unsigned int는 한계치(약 42억)를 넘으면 에러가 나는 게 아니라, 다시 0으로 돌아가서 시작해버려. (마치 시계 바늘이 12시를 지나면 1시가 되는 것처럼!)
//
//3. 조건식의 논리 오류
//if(result > 4294967295) 이 조건은 절대 참이 될 수 없어.
//unsigned int가 가질 수 있는 최대값이 바로 그 숫자거든. 상자 크기 자체가 그 숫자까지인데 그보다 큰지 물어보면 컴퓨터는 항상 "아니"라고 대답해.
//
//*/