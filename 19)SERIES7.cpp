//SERIES7(x^1/1!+x^2/2!+x^3/3!+.......x^n/n!)
#include<stdio.h>
#include<math.h>
main()
{
	int x,i,n,f,j;
	float s=0;
	printf("ENTER NUMBER OF TERMS:");
	scanf("%d",&n);
	printf("ENTER VALUE FOR X:");
	scanf("%d",&x);
	for(i=1;i<=n;i++) 
	{
	     f=1;
       for(j=1;j<=i;j++)
       {
       	   f=f*j;
       	   }
       	   s=s+(pow(x,i)/f);
	}
	printf("SUM OF THE SERIES=%f",s);
}
