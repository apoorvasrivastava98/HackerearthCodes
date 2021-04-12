#include <stdio.h>

int main()
{
	int len,num;
	scanf("%d", &len);
	scanf("%d", &num);        
	if(len<=23 && 500<num<1000)
	{      			
	printf("Take Medicine");      
	}
	else
	{
	printf("Don't take Medicine"); 
	}
}
