#include<stdio.h>
#include<conio.h>
int power(int n)
{
	int i,p,ans=1;
	printf("Enter value of power:");
	scanf("%d",&p);
	
	for(i=0;i<p;i++){
		ans = ans*n;
	}
	return printf("%d",ans);
}
void main()
{
	int n;
	printf("Enter A number:");
	scanf("%d",&n);
	power(n);
}
