#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,gcd;
	
	printf("Enter First Number : ");
	scanf("%d",&n1);
	
	printf("Enter Second Number : ");
	scanf("%d",&n2);
	
	n1=(n1<n2)?n1:n2;
	
	for(int i=1;i<=n1;i++){
		if(n1%i==0 && n2%i==0)
			gcd=i;
	}
	
	printf("GCD : %d",gcd);
	return 0;
}
