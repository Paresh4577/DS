#include<stdio.h>
#include<stdlib.h>

void selection(int a[],int len){
	int pass,min_index,i;

	for(pass=0;pass<len-1;pass++){
		min_index = pass;
		for(i=pass+1;i<len;i++){
			if(a[i] < a[min_index]){
				min_index = i;
			}
		}
		if(min_index != pass){
			int temp;
			temp=a[pass];
			a[pass]=a[min_index];
			a[min_index]=temp;
		}
	}
}

void main(){
	int size,i,pass,min_index;
	int a[] = {20,45,6,78,90};
	int len = sizeof(a)/sizeof(a[0]);
    
    selection(a,5);
	printf("\nAfter Selection Sort Array:\n");
	for(i=0;i<len;i++){
		printf("\nSorted Elements %d:",a[i]);
	}	
}
