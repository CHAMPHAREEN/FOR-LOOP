//DECIMAL TO BINARY
#include<stdio.h>
main()
{
	int num,i,bi=0,r;
	printf("ENTER DECIMAL NUMBER:");
	scanf("%d",&num);
	for(i=1;num!=0;i=i*10)
	{
		
		r=num%2;
		bi=bi+r*i;
		num=num/2;
	}
	printf("BINARY NUMBER=%d",bi);
}
