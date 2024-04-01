#include<stdio.h>
#include<conio.h>
int main(){
	int n,count=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}
	
	if(count==2)
		printf("%d is a prime Number...",n);
	else 
		printf("%d is not a prime Number...",n);
	return 0;
}
