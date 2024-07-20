// Calculater using C.
#include <stdio.h>
#include <conio.h>

int main(){
	int menu;
	float num1, num2, result;
	clrscr();
	printf("Enter number from above list\n");


	printf("1) Addition\n");
	printf("2) Substraion\n");
	printf("3) Multiplication\n");
	printf("4) Division\n");

	scanf("%d", &menu);


	switch(menu){

	case 1:
		printf("Enter first number for addition: ");
		scanf("%f", &num1);

	printf("Enter second number for addition: ");
	scanf("%f", &num2);

	result = num1 + num2;
	printf("%.2f + %.2f = %.2f\n", num1, num2, result);

	break;

	case 2:
	printf("Enter first number for Subtraction: ");
	scanf("%f",&num1);

	printf("Enter second number for Subtraction: ");
	scanf("%f", &num2);

	result = num1 - num2;
	printf("%.2f - %.2f = %.2f", num1, num2, result);

	break;

	case 3:
	printf("Enter first number for multiplication: ");
	scanf("%f", &num1);

	printf("Enter second number for multiplaication: ");
	scanf("%f", &num2);

	result = num1 * num2;
	printf("%.2f x %.2f = %.2f", num1, num2, result);

	break;

	case 4:

	printf("Enter first number for division: ");
	scanf("%f", &num1);

	printf("Enter second number for division: ");
	scanf("%f", &num2);

	result = num1 / num2;
	printf("%.2f /  %.2f = %2f", num1, num2, result);

	break;

	default:
		printf("Choose any number from above only");

	break;

	}
	getch();
	return 0;
}