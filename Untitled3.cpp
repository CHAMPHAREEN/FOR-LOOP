#include<stdio.h>
main()
{
	int a,b;
	printf("give a number :");
	scanf("%d",&a);
	if (65<a<90)
	{
	b=a+32;
	printf("%c",b);
    }
	else if (a>=122)
	{
    b=a-32;
    printf("%c",b);
    }
	else
	{  
    printf("no answer");
    }
}
