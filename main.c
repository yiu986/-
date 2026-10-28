//202610125304
//yangqunhao
int main()
{
	float t;

	printf("摄氏度：");
	scanf("%f", &t);

	float f = t * 1.8 + 32.0;

	printf("华氏度:%.1f", f);

	return 0;
}
