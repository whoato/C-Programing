#include <stdio.h> // <stdio.h> 포함.

// 글로벌 변수 선언부

	/*
		함수 전방 선언부
		정의한 함수가 선언되지 않으면 빌드되지 않는다.
		다만 선언과 동시에 정의하면 가능.
	*/

int Add(int x1, int x2);  // 두 개의 매개변수(파라메터) == 두 개의 값이 필요.



//메인

int main()
{
	// printf("Hello, World !!\n");
	// printf("제 나이는 %d살 입니다.\n", 23);

	// %d = 정수형을 출력할 때 사용.
	// printf("%d학년 %d반 %d번 입니다.\n", 1, 2, 3);
	
	// sizeof() = 데이터 공간의 크기를 바이트 단위로 반환. & 정수형.
	/*
		printf("%d\n", sizeof(int));		//4
		printf("%d\n", sizeof(float));		//4
		printf("%d\n", sizeof(char));		//1

		printf("char: %d\n", sizeof(char));
		printf("short: %d\n", sizeof(short));
		printf("int: %d\n", sizeof(int));
		printf("long: %d\n", sizeof(long));
		printf("float: %d\n", sizeof(float));
		printf("double: %d\n", sizeof(double));
	*/

	/*
		int iSum; : (int형)변수 선언
		iSum = 10; : 변수 초기화.
		int iSum = 10; : (int형)변수 선언과 동시에 초기화.

		변수: 변하는 값!
		상수 : 변하지 않는 값.
	*/

	//헝가리안 표기법 참조

	int iSum = Add(10, 100);

	printf("%d\n", iSum);

	iSum = Add(5, 500);

	printf("%d\n", iSum);
	//printf("%d\n", sizeof(iSum));


	// char = 정수형 & 문자
	// %c = 문자
	printf("%c\t%c\t%c\n", 65, 97, 48);

	return 0; // return을 만나는 순간이 프로그램의 목표. return을 만나면 프로그램 종료.
}
//함수 정의부


// 함수 기본
// [int] =  출력의 형태		[Add] = 함수의 이름.

int Add(int x1, int x2)				// 입력의 형태 : x
{									// 함수의 몸체 시작
	
	int y = x1 + x2;
	

	return y;
	//return y;
}									// 함수의 몸체 끝
