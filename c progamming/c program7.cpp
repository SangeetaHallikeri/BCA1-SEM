#include <stdio.h>
int main()
{
	int units;
	float bill;
	printf("enter electricity units: ");
	scanf("%d", &units);
	if(units < 0)
	{
		printf("invalid units.\n");
		return 0;
	}
	if(units <=50)
	  bill = units * 1.50;
	else if(units <=150)
	  bill = 50 * 1.50 + (units - 50) * 2.50;
	else if(units <= 250)
	  bill = 50 * 12.50 + (units - 250) * 6.00;
	bill = bill + 100;
	printf("electricity bill = rs. %.2f\n",bill);
	return 0;
	      
}