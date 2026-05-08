//#include <stdio.h>
//#include <stdbool.h>
//
///* --- 1. 선언부 (Declaration) --- */
//// 요리사: 1~5단계 담당 (계란 소모)
//bool Chef_CookEgg(int* pEggCount);
//
//// 서버: 6~7단계 담당 (접시 소모)
//bool Server_DeliverFood(int* pPlateCount);
//
///* --- 2. 구현부 (Main / Manager) --- */
//int main() {
//    // 자원 설정
//    int eggs = 50;
//    int plates = 30;
//    int people = 35;
//    int servedCount = 0;
//
//    printf("=== Egg Service Logistics Start ===\n");
//
//    for (int i = 0; i < people; i++) {
//        // [매니저] 요리사에게 일을 시킴
//        if (!Chef_CookEgg(&eggs)) {
//            printf("[System] Stop: Out of eggs at step 1.\n");
//                break;
//        }
//
//        // [매니저] 서버에게 일을 시킴
//        if (!Server_DeliverFood(&plates)) {
//            printf("[System] Stop: Out of plates at step 6.\n");
//                break;
//        }
//
//        servedCount++;
//        printf(">>> Person %d received their meal.\n\n", servedCount);
//    }
//
//    printf("=== Service Finished: Total %d people served ===\n", servedCount);
//    return 0;
//}
//
///* --- 3. 정의부 (Definition) --- */
//
//// 요리사: Step 1 ~ 5
//bool Chef_CookEgg(int* pEggCount) {
//    if (*pEggCount <= 0) return false;
//
//    (*pEggCount)--; // 1. Crack the egg
//    printf("1. Egg cracked. (Remaining: %d)\n", *pEggCount);
//    printf("2. Put on the frying pan.\n");
//    printf("3. Waiting for one side to cook...\n");
//    printf("4. Flip with a spatula.\n");
//    printf("5. Waiting for the other side to cook...\n");
//
//    return true;
//}
//
//// 서버: Step 6 ~ 7
//bool Server_DeliverFood(int* pPlateCount) {
//    if (*pPlateCount <= 0) return false;
//
//    (*pPlateCount)--; // 6. Put the egg on a plate
//    printf("6. Served on a plate. (Remaining: %d)\n", *pPlateCount);
//    printf("7. Delivered to the person.\n");
//
//    return true;
//}