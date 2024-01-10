#include<stdio.h>
#include<conio.h>

void main(){
	int i,n;
	
	printf("Enter size of Array:");
	scanf("%d",&n);
	
	int a[n];
	int *pa;
	pa = &a[0];
	for(i=0;i<n;i++){
		printf("Enter Elements:\n");
		scanf("%d",pa+i);
		
	}
	printf("Pointer Elements Are:\n");
	for(i=0;i<n;i++){
		printf("%d ",*(pa+i));	
	}
	
	
	
}
