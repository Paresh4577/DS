#include<stdio.h>
#include<conio.h>
void GCD(int n1,int n2,int n){
	int gcd;
	int i;
	for(i=1;i<=n;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	printf("GCD is %d",gcd);
}
void main()
{
	int n1,n2,n;
	printf("Enter a 1 Number:");
	scanf("%d",&n1);
	
	printf("Enter a 2 Number:");
	scanf("%d",&n2);
	
	if(n1>n2){
		n=n1;
	}
	else{
		n=n2;
	}
	GCD(n1,n2,n);
}
