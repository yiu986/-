//202610125304
//yangqunhao
int main()
{
	float a, b, c;

	printf("输入三个数字：");
	scanf("%f %f %f", &a, &b, &c);

	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf("非正数无法组成三角形");
	}
	else if (a + b > c && a + c > b && b + c > a)
	{
		printf("可以组成三角形\n");
	}
	else {
		printf("不能组成三角形\n");
	}

	return 0;
}
