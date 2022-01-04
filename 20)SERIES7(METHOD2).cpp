//SERIES7(x^1/1!+x^2/2!+x^3/3!+.......x^n/n!)[METHOD 2]
#include<stdio.h>
#include<math.h>
main()
{
	int n,x,i,f=1;
	float s=0;
	printf("ENTER NUMBER OF TERMS:");
	scanf("%d",&n);
	printf("ENTER VALUE FOR X:");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
       {
       	   f=f*i;
       	   s=s+(pow(x,i)/f);
	}
	printf("SUM OF THE SERIES=%f",s);
}

