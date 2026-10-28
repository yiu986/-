//202610125304
//yangqunhao
int main()
{
	float num1, num2;
	char op;

	scanf("%f %c %f", &num1, &op, &num2);
	
	if (op == '+')
	{
		printf("%.2f\n", num1 + num2);
	}
	else if (op == '-')
	{
		printf("%.2f\n", num1 - num2);
	}
	else if (op == '*')
	{
		printf("%.2f\n", num1 * num2);
	}
	else if (op == "/")
	{
		printf("%.2f\n", num1 / num2);
	}
	else
	{
		printf("不支持的运算符");
	}
	return 0;
}
