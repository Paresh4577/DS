#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr,n,ns,i;
	
	printf("Enter element size : ");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
	
	printf("Enter new element size : ");
	scanf("%d",&ns);
	
	ptr=realloc(ptr,sizeof(int)*ns);
	
	for(i=n;i<ns;i++){
		scanf("%d",(ptr+i));
	}
	for(i=0;i<ns;i++){
		printf("%d\n",*(ptr+i));
	}
	
	free(ptr);
	
	//printf("%d\n",*(ptr+i));
}
