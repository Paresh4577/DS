#include<stdio.h>
#include<conio.h>

int pow(int n,int p){
	int power=1;
	for(int i=1;i<p;i++){
		power =n*n;
	}
	return power;
}
int powRecursion(int n,int p){
	if(p==1)
		return n;
	else
		return n*powRecursion(n,p-1);
}
int main(){
	int n,p;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	printf("Enter Power : ");
	scanf("%d",&p);
	
	printf("Enter Number : %d\n",pow(n,p));
	printf("Enter Number : %d",powRecursion(n,p));
	
	return 0;
}
