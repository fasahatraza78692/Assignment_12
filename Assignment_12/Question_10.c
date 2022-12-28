#include<stdio.h>
void Reverse(int n)
{
	if(n==0)
	  return ;
	
	printf("%d",n%10);
	Reverse(n/10);
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Reverse = ");
	Reverse(n);
 return 0;
}
