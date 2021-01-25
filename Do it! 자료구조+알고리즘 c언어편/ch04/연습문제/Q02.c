///*하나의 배열을 공유하여 2개의 스택을 구현하는 스택 프로그램*/
//#include <stdio.h>
//#include "IntStack2.h"
//
//int main(void) {
//	IntStack s;
//	if (Initialize(&s, 64) == -1) {
//		puts("스택 생성에 실패하였습니다.");
//		return 1;
//	}
//
//	while (1) {
//		int menu, x;
//		int idx;
//		printf("현재 데이터 수 : A : %d, B : %d / %d\n", Size(&s, 'A'), Size(&s, 'B'), Capacity(&s));
//		printf("(1)A에 푸시 (2)A에서 팝 (3)A에서 피크 (4)A 출력 (5)A에서 검색 (6)A 초기화 \n(7)B에 푸시 (8)B에서 팝 (9)B에서 피크 (10)B 출력 (11)B에서 검색 (12)B 초기화 (13)빈 상태 / 가득 찬 상태 (0)종료："); scanf("%d", &menu);
//
//		if (menu == 0) break;
//
//		switch (menu) {
//		case 1 : //A푸시
//			printf("데이터 : "); scanf("%d", &x);
//			if (Push(&s, 'A', x) == -1) 
//				puts("\a오류 : 푸시에 실패하였습니다.");
//			break;
//
//		case 2 : //A팝
//			if (Pop(&s, 'A', &x) == -1)
//				puts("\a오류 : 팝에 실패하였습니다.");
//			else
//				printf("팝 데이터는 %d입니다.\n", x);
//			break;
//
//		case 3 : //A피크
//			if (Peek(&s, 'A', &x) == -1)
//				puts("\a오류 : 피크에 실패하였습니다.");
//			else
//				printf("피크 데이터는 %d입니다.\n", x);
//
//		case 4 : //A출력
//			Print(&s, 'A');
//			break;
//
//		case 5 : //A검색
//			if (idx = Search(&s, 'A', x) == -1)
//				puts("\a오류 : 검색에 실패하였습니다.");
//			else
//				printf("검색 데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//
//		case 6 : //A초기화
//			Clear(&s, 'A');
//			puts("스택을 초기화하였습니다.");
//
//		case 7: //B푸시
//			printf("데이터 : "); scanf("%d", &x);
//			if (Push(&s, 'B', x) == -1)
//				puts("\a오류 : 푸시에 실패하였습니다.");
//			break;
//
//		case 8: //B팝
//			if (Pop(&s, 'B', &x) == -1)
//				puts("\a오류 : 팝에 실패하였습니다.");
//			else
//				printf("팝 데이터는 %d입니다.\n", x);
//			break;
//
//		case 9: //B피크
//			if (Peek(&s, 'B', &x) == -1)
//				puts("\a오류 : 피크에 실패하였습니다.");
//			else
//				printf("피크 데이터는 %d입니다.\n", x);
//
//		case 10: //B출력
//			Print(&s, 'B');
//			break;
//
//		case 11: //B검색
//			if (idx = Search(&s, 'B', x) == -1)
//				puts("\a오류 : 검색에 실패하였습니다.");
//			else
//				printf("검색 데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//
//		case 12: //B초기화
//			Clear(&s, 'B');
//			puts("스택을 초기화하였습니다.");
//
//		case 13 : //빈 상태 / 가득 찬 상태
//			printf("스택이 비어 %s.\n", IsEmpty(&s, 'A') ? "있습니다." : "있지 않습니다.");
//			printf("스택이 비어 %s.\n", IsEmpty(&s, 'B') ? "있습니다." : "있지 않습니다.");
//			printf("스택이 가득 %s.\n", IsFull(&s) ?  "찼습니다." : "차지 않았습니다.");
//			break;
//		}
//	}
//
//	Terminate(&s);
//
//	return 0;
//}
//
//
//
