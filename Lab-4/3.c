#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

void main(){
	int x,y;
	int *pa;
	int *pb;
	
	pa=&x,pb=&y;
	printf("Enter Value of a:");
	scanf("%d",pa);
	printf("Enter Value of b:");
	scanf("%d",pb);
	printf("Before Swapping Values:\n");
	printf("\n Value of a:%d \n Value of b:%d",*pa,*pb);
	printf("After Swapping Values:\n");
	swap(x,y);
	printf("\n Value of a:%d \n Value of b:%d",*pa,*pb);
	
	
}
