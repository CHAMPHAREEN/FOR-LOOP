//SERIES6(1-2+3-4.....+n)
#include<stdio.h>
main()
{
	int i,s=0,n;
	printf("ENTER VALUE FOR n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		s-=i;
		else
		s+=i;
	}
	printf("SUM OF SERIES=%d",s);
}	
