#include<stdio.h>
main()
{
	int i,a=1,b;
	printf("give a range :");
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;i++)
	if (a>=65 & b<97)
	i=65+a;
	a=i;
	printf("%c",a);	
}
