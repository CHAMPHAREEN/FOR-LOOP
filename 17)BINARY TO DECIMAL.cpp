//BINARY TO DECIMAL
#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("ENTER THE BINARY NUMBER:");
	scanf("%d",&n);
	int i,dec=0,r;
	for(i=0;n!=0;i++)
	{
		r=n%10;
		dec=dec+r*pow(2,i);
		n=n/10;
	}
	printf("THE DECIMAL NUMBER IS %d",dec);
}
