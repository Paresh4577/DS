#include<stdio.h>

void insertion(int a[],int len){
	int i,j;
	for(i=1;i<len;i++){
		int key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}	
		a[j+1]=key;
	}
}
void main(){
	int len,i;
	
    int	a[] = {78,56,33,23,2,8,99};
	len = sizeof(a)/sizeof(a[0]);
	insertion(a,len);
	printf("After Sorting Elements\n");
	for(i=0;i<len;i++){
			printf("a[%d] = %d\n",i, a[i]);
	}
	
}
