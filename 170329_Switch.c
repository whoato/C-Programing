#include <stdio.h>

int main()
{
	int iMonth;
	printf("탄생석! 태어난 달 : ");
	scanf_s("%d", &iMonth);
	printf("당신의 탄생석은 ");

	switch (iMonth)
	{
		case 1:
			printf("가넷 \n: 진실, 우정");
			break;
		case 2:
			printf("자수정 \n: 평화, 성실");
			break;
		case 3:
			printf("아쿠아마린 \n: 총명");
			break;
		case 4:
			printf("다이아몬드 \n: 고귀");
			break;
		case 5:
			printf("에메랄드 \n: 행복");
			break;
		case 6:
			printf("진주 \n: 건강, 부귀");
			break;
		case 7:
			printf("루비 \n: 용기, 정의");
			break;
		case 8:
			printf("페리도트 \n: 부부의 화합");
			break;
		case 9:
			printf("사파이어 \n: 진리, 불변");
			break;
		case 10:
			printf("오팔 \n: 희망, 순결");
			break;
		case 11:
			printf("토파즈 \n: 우정");
			break;
		case 12:
			printf("터키석 \n: 성공, 승리");
			break;
		default:
			printf("화성");
	}

	printf(" 입니다.\n");

	return 0;
}
