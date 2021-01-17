#include <stdio.h>

int main()
{
	int lenghtA;
	printf("Enter the lenght of the segment A ( in sm): ");
	scanf_s("%d", &lenghtA);
	int lenghtB;
	printf("Enter the lenght of the segment B ( in sm): ");
	scanf_s("%d", &lenghtB);
	if (lenghtA < lenghtB)
	{
		printf("the segment B can't be longer then the sesgment A");
		return 0;
	}
	else
	{
		int remainderA;
		remainderA = lenghtA - (lenghtA / lenghtB) * lenghtB;
		printf("The nember of segmet B in the segment A: %d", remainderA);
		return 0;
	}
}