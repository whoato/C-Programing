#include <stdio.h>

int main()
{
	char cGrade = 0;

	printf("성적 A B C D F 중 입력 : ");
	scanf_s("%c", &cGrade);

	switch(cGrade)  // char형 또한 정수형이기 때문에 가능하다.
	{
		case 'A':
			printf("참 잘햇어요.\n");
			break;
		case 'B':
			printf("변명은 할 수 있겠네요.\n");
			break;
		case 'C':
			printf("아직 뒤에 더 있으니까.\n");
			break;
		case 'D':
			printf("학교 밖 공부.\n");
			break;
		case 'F':
			printf("컴싸가 잘못했지.\n");
			break;
		default:
			printf("잘못된 입력.\n");
			return 0;
	}

	printf("결과 : %c\n", cGrade);

	return 0;
}
