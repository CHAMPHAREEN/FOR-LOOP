//PRIME NUMBERS BETWEEN 1 AND n
#include<stdio.h>
main()
{
	int n,i,j,f;
	printf("ENTER VALUE FOR n:");
	scanf("%d",&n);
	printf("PRIME NUMBERS BETWEEN 1 TO %d ARE:\n",n);
	for(i=2;i<n;i++)
	{
		   f=0;
      for(j=2;j<i;j++)
      {
		if(i%j==0)
		{
			f=1;
			break;
		}
	}

	if(f==0)
	{
	    printf("%10d\n",i);	
	}
}
	
}

