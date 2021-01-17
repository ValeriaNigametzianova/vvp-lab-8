#include<stdio.h>

int main()
{
	int number;
	printf("Enter three-digit number: ");
	scanf_s("%d", &number);

	if (number / 1000 != 0)
		return 0;
	else
	{
		int dischargeUnits;
		int dischargeTens;
		int dischargeHundreds;
		dischargeUnits = number % 10;
		dischargeTens = number % 100 / 10;
		dischargeHundreds = number / 100;

		int t = dischargeHundreds;
		dischargeHundreds = dischargeTens;
		dischargeTens = dischargeUnits;
		dischargeUnits = t;

		int newNumber;
		newNumber = dischargeUnits + dischargeTens * 10 + dischargeHundreds * 100;
		printf("New Number: %d", newNumber);
		return 0;
	}
}