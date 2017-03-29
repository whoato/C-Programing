#include <stdio.h>
#include <windows.h>

int YesNo (int iYesNo);
void waitFor (unsigned int secs);

int main()
{
	int iStarCap;
	int iYesNo;
	int iTemp = 0;
	int Mana = 0;
	int Damage = 0;
	boolean bGetMana = 0;
	boolean bWeapUp = 0;

	printf("How much do you have the starcap?\n");
	scanf_s("%d", &iStarCap);

	switch (iStarCap)  // 정수형이면서 상수형.
	{
		case 0 :
		case 1 :
			printf("Not enough.\n");
			break;
		case 2 : 
		case 3 : 
		case 4 :
			printf("I Need more.\n");
			break;
		case 5 :
			printf("Do you wanna some mana?\n");
			bGetMana++;
			iTemp++;
			break;
		case 6 : 
			printf("Do you wanna upgrade your weapon?\n");
			bWeapUp++;
			iTemp++;
			break;
		default:
			printf("Are you serious?\n");
	}

	if (iTemp == 1)
	{
		printf("Yes : Enter '1', No : Enter '0'.\n");
		scanf_s("%d", &iYesNo);
		iTemp--;
	}


	if (iYesNo == 1)
	{
		printf("Wait a minute...\n");

		Sleep(5);

		if (bGetMana == 1)
		{
			Mana++;
		}
		if (bWeapUp == 1)
		{
			Damage++;
		}

		printf("Done!\n");
	}
	else if (iYesNo == 0)
	{
		printf("Okey, then... Go Fuck Yourself.\n");
	}
	else
	{
		printf("Enter '1' or '0'.\n");
		iTemp++;
	}

	return 0;
}
