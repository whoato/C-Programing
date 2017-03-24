#include <stdio.h>

int main()
{
	/* int iNum;						// 값을 저장 받을 int형
	float fNum;						// 값을 저장 받을 float형

	printf("iNum 값 입력 : ");
	scanf_s("%d", &iNum);				// scanf(); 에 값을 입력하고 '&' 로 저장 될 위치를 정해준다.

	printf("fNum 값 입력 : ");			//만약 & ampersand가 없으면 & 전 코드까지 빌드된다. 버그위치 파악가능.
	scanf_s("%f", &fNum);

	printf("iNum : %d\n", iNum);
	printf("fNum : %f\n", fNum);

	return 0; */

	int iNum = 10;					// 헝가리안 표기법.
	int iNum2 = 100;

	float fPI = 3.141592f;		//float형은 가급적 값 뒤에 f붙일 것. 가독성을 위함.
	float fRadian = 57.29577f;

	printf("%d\n", iNum);
	printf("%d\n", iNum2);
	printf("\n");

	printf("%f\n", (float)iNum);
	printf("%f\n", (float)iNum2);
	printf("\n");

	printf("%f\n", fPI);
	printf("%f\n", fRadian);
	printf("\n");

	printf("%d\n", (int)fPI);			// >> 3				int 강제 형(태)변환
	printf("%d\n", (int)fRadian);		// >> 57			소수점 이하 자리수 소실.
	printf("\n");


	int iNum3 = 65;


	printf("%c\n", 'A');				// >> A				문자
	printf("%c\n", 65);					// >> A				10진수
	printf("%c\n", iNum3);				// >> A				변수
	printf("%c\n", 0x41);				// >> A				16진수
	printf("\n");

	printf("%x\n", 65);					// >> 0x41
	printf("\n");


	int iNum4;

	printf("정수 입력 : ");				// \n을 쓰면 아래로 입력
	scanf("%d", &iNum4);				// \n X 
	printf("%d\n", iNum4);
	printf("\n");

	char str1;						// char = 1바이트 & 문자
										// 1바이트 데이터 표현 범위 -128 ~ 127
										// 0 ~ 127 아스키 코드 사용. 0 ~ 127 중 1가지 정보만 담을 수 있음.

	printf("문자 입력 : ");
	scanf("%c\n", &str1);
	printf("%d\n", str1);
	printf("%c\n", str1);
	printf("\n");


	// 오늘 숙제

	// 숫자를 입력하여 문자를 출력하는 프로그램을 작성하시오.

	// 출력 해야될 문자는 [ H, e, l, l, o, (공백), W, o, r, l, d, !, ! ]

	// 숫자를 입력했다는 것을 사진으로 찍어서 보내시오.


	char str1, str2, str3, str4, str5, str6, str7, str8, str9, str10, str11, str12, str13;

	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",
		str1, str2, str3, str4, str5, str6, str7,
		str8, str9, str10, str11, str12, str13);



	return 0;
}
