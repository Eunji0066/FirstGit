//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//    int eggs = 50;      // 계란 50개
//    int plates = 30;    // 접시 30개
//    int people = 35;    // 사람 35명
//    int servedCount = 0;
//
//    printf("=== Egg Service (Direct Execution) Start ===\n");
//
//    // 사람 수만큼 반복 시도
//    for (int i = 0; i < people; i++)
//    {
//
//        // ① 계란을 깨기 전, 계란이 있는지 체크
//        if (eggs <= 0)
//        {
//            printf("[System] Stop: No more eggs to crack.\n");
//            break; // 작업 즉시 중단 
//        }
//
//        // --- 7단계 순서대로 진행 [cite: 21, 37] ---
//
//        // ① 계란을 깬다
//        eggs--;
//        printf("Step 1: Cracked an egg. (Left: %d)\n", eggs);
//
//        // ② 후라이팬에 올린다 [cite: 23]
//        printf("Step 2: Put it on the frying pan.\n");
//
//        // ③ 한쪽 면이 익을 때까지 기다린다 [cite: 24]
//        printf("Step 3: Waiting for one side to cook...\n");
//
//        // ④ 뒤집개로 뒤집는다 [cite: 25]
//        printf("Step 4: Flipped with a spatula.\n");
//
//        // ⑤ 반대 면이 익을 때까지 기다린다 [cite: 26]
//        printf("Step 5: Waiting for the other side to cook...\n");
//
//        // ⑥ 후라이를 접시에 담기 전, 접시가 있는지 체크 [cite: 27, 33]
//        if (plates <= 0)
//        {
//            printf("[System] Stop: No more plates to serve.\n");
//            break; // 작업 즉시 중단 
//        }
//        plates--;
//        printf("Step 6: Placed the egg on a plate. (Left: %d)\n", plates);
//
//        // ⑦ 사람에게 전달한다 [cite: 28]
//        printf("Step 7: Delivered to person %d.\n\n", i + 1);
//
//        servedCount++;
//    }
//
//    printf("=== Final Result: %d people served ===\n", servedCount);
//
//    return 0; // 프로그램 종료
//}