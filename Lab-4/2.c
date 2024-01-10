#include<stdio.h>
#include<conio.h>

void swap(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	
}

void main(){
	int x,y;
	printf("Enter Value of a:");
	scanf("%d",&x);
	printf("Enter Value of b:");
	scanf("%d",&y);
	printf("Before Swapping Values:\n");
	printf("\n Value of a:%d \n Value of b:%d",x,y);
	printf("After Swapping Values:\n");
	swap(x,y);
	printf("\n Value of a:%d \n Value of b:%d",a,b);
	
	
}
