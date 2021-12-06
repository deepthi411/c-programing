#include<stdio.h>
main()
{
    float m,p,c,h,e;
    int x;
    scanf("%f%f%f%f%f",&m,&p,&c,&h,&e);
    x=((m+p+c+h+e)/500)*100;
    if (x>90)
    {
    	printf("A");
	}
	else if(x>80)
	{
		printf("B");
	}
	else if(x>70)
	{
		printf("C");
	}
	else if(x>40)
	{
		printf("D");
	}
	else if(x<40)
	{
		printf("E");
	}
}
