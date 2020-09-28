#include"stdio.h"
#include "stdlib.h"
#define pi 3.141596
int main()
{
	int r;
	float a;
	printf("Teclea el radio del circulo en cm \n");
	scanf("%i",&r);
	a=r*r*pi;
	printf("El area del circulo es %.2f cm \n",a);
	system("pause");
	return 0;
}
