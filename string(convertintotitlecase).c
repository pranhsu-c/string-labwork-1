#include<stdio.h>

main()
{
	char a[100]={'p','R','A','N','S','H','U'};
	
	int i,n;
	
	for(i=0;i<1;i++)
	{
		printf("%c",a[i]-32);
	}
   for(n=1;n<=7;n++)
	{
		printf("%c",a[n]+32);
	}
	
}
