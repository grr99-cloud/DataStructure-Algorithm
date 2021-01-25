/*큐를 구현하는 프로그램*/
#include <stdio.h>
#include "ArrayIntQueue.h"

int main(void) {
	ArrayIntQueue q;
	if (Initialize(&q, 64) == -1) {
		puts("큐 생성에 실패하였습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		int idx;
		printf("현재 데이터 수 : %d / %d\n", Size(&q), Capacity(&q));
		printf("(1)인큐 (2)디큐 (3) 피크 (4)출력 (5)검색 (6)초기화 (7)빈 상태 / 가득 찬 상태 (0)종료："); scanf("%d", &menu);

		if (menu == 0) break;

		switch (menu) {
		case 1 : //인큐
			printf("데이터 : "); scanf("%d", &x);
			if (Enque(&q, x) == -1) 
				puts("\a오류 : 인큐에 실패하였습니다.");
			break;

		case 2 : //디큐
			if (Deque(&q, &x) == -1)
				puts("\a오류 : 디큐에 실패하였습니다.");
			else
				printf("디큐 데이터는 %d입니다.\n", x);
			break;

		case 3 : //피크
			if (Peek(&q, &x) == -1)
				puts("\a오류 : 피크에 실패하였습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);

		case 4 : //출력
			Print(&q);
			break;

		case 5 : //검색
			if (idx = Search(&q, x) == -1)
				puts("\a오류 : 검색에 실패하였습니다.");
			else
				printf("검색 데이터는 인덱스 %d 위치에 있습니다.\n", idx);

		case 6 : //초기화
			Clear(&q);
			puts("큐를 초기화하였습니다.");

		case 7 : //빈 상태 / 가득 찬 상태
			printf("큐가 비어 %s.\n", IsEmpty(&q) ? "있습니다." : "있지 않습니다.");
			printf("큐가 가득 %s.\n", IsEmpty(&q) ? "찼습니다." : "차지 않았습니다.");
			break;
		}
	}

	Terminate(&q);

	return 0;
}



