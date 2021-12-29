//SERIES1(1+2+3+.....+n)
#include<stdio.h>
main()
{
	int i,s=0,n;
	printf("ENTER VALUE FOR n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("SUM OF SERIES=%d",s);
}
