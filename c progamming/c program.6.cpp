# include <stdio.h>
int main()
{
	int a, b, choice;
	printf("enter two integers: ");
	scanf("%d %d", &a, &b);
	printf("\n1. addition");
	printf("\n2.subtraction");
	printf("\n3. multiplication");
	printf("\n4.division");
	printf("\n5.remainder");
	printf("\nenter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("sum = %d\n", a + b);
			break;
		case 2:
		    printf("difference = %d\n", a - b);
		    break;
		case 3:
		    printf("product = %d\n", a * b);
			break;
		case 4:
		    if (b != 0)
			    printf("quotient = %d\n", a / b);
			else
			    printf("division by zero is not possible.\n");
			break;
		case 5:
		    if (b != 0)
			    printf("remainder = %d\n", a % b);
			else
			    printf("remainder by zero is not possible.\n");
			break;
		default:
		    printf("invalid choice.\n");							    
	}
	return 0;
}