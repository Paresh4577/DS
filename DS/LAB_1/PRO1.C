#include<stdio.h>
#include<conio.h>
int Factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int FactorialRecursion(int n){
	if(n==1)
		return 1;
	else
		return n * FactorialRecursion(n-1);
}
int main(){
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	printf("Factorial of Number is (using loop): %d \n",Factorial(n));
	printf("Factorial of Number is (using Recursion) : %d ",FactorialRecursion(n));
	
	return 0;
}

