#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr,n,i;
	
	printf("Enter element size : ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
}
