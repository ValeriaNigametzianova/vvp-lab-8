#include<stdio.h>

int main()
{
	int number;
	printf("Enter two-digit number: ");
	scanf_s("%d", &number);

	if ((number / 100) != 0)
	{
		printf("error");
		return 0;
		
	}
	else
	{
		int  dischargeUnits;
		dischargeUnits = number % 10;

		int dischargeTens;
		dischargeTens = number / 10;

		int t = dischargeUnits;
		dischargeUnits = dischargeTens;
		dischargeTens = t;

		int newNumber;
		newNumber = dischargeTens * 10 + dischargeUnits;

		printf("New number: %d", newNumber);
		return 0;
	}
		
}
