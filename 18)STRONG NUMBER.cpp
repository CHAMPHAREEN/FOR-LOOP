//STRONG NUMBER(SUM OF FACTORIALS OF INDIVIDUAL DIGITS IS EQUAL TO THE NUMBER)          
#include<stdio.h>
main()
{
	int f,s=0,d,num,i,m;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	m=num;
	while(num!=0)
	{
		d=num%10;
		num=num/10;
		f=1;
	 for(i=1;i<=d;i++)
    {
    	f=f*i;
	}
	    s=s+f;
}
     
	if(s==m)
	{
		printf("%d IS A STRONG NUMBER",m);
	}
	else
	{
		printf("%d IS NOT A STRONG NUMBER",m);
	}
}
