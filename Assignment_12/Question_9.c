#include<stdio.h>
void Octal(int n)
{
	if(n==0)
	  return ;
	Octal(n/8);
	printf("%d",n%8);
}
int main()
{
	int n;
	printf("Enter a decimal number\n");
	scanf("%d",&n);
	printf("Octal of %d = ",n);
	Octal(n);
 return 0;
}
