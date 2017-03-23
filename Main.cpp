#include <stdio.h>


//함수 전방 선언
int Add(int x1, int x2);



int main()
{
	//printf("Hello, World !!\n");
	//printf("제 나이는 %d살 입니다.\n", 23);

	//%d = 정수형을 출력할 때 사용.
	//printf("%d학년 %d반 %d번 입니다.\n", 1, 2, 3);
	
	// sizeof() = 데이터 공간의 크기를 바이트 단위로 반환. & 정수형.
	/*
	printf("%d\n", sizeof(int));		//4
	printf("%d\n", sizeof(float));		//4
	printf("%d\n", sizeof(char));		//1
	*/
	/*
	printf("char: %d\n", sizeof(char));
	printf("short: %d\n", sizeof(short));
	printf("int: %d\n", sizeof(int));
	printf("long: %d\n", sizeof(long));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	*/

	int Sum = Add(10, 100);

	printf("%d\n", Sum);





	// char = 정수형?

	return 0;
}

// 함수 기본
// [int] =  출력의 형태		[Add] = 함수의 이름.
int Add(int x1, int x2) // 입력의 형태 : x
{// 함수의 몸체 시작
	
	int y = x1 + x2;
	


	return y;
	//return y;
}// 함수의 몸체 끝
