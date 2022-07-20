#include <stdio.h>
#include <stdbool.h>

int main() 
{
	char operation;

	printf("Введите операцию: ");
	scanf("%c", &operation);

	int value1 = 0;
	int value2 = 0;

	printf("Введите значения (через пробел): ");
	scanf("%i %i", &value1, &value2);

	int result = 0;
	bool operation_is_valid = true;

	switch (operation)
	{
		case '+':
		{
			result = value1 + value2;
	    	break;
		}
		case '-':
		{
			result = value1 - value2;
			break;
		}
		case '*':
		{
			result = value1 * value2;
	    	break;
		}
		case '/':
		{
			result = value1 / value2;
	    	break;
		}
		default:
		{
			printf("Неизвестная операция");
			operation_is_valid = false;
		}
	}

	if (operation_is_valid)
	{
		printf("%i %c %i %c %i", value1, operation, value2, '=', result);
	}

	return 0;
}
