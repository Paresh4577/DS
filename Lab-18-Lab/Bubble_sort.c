#include<stdio.h>
#include<stdlib.h>

void bubble(int a[],int len){
  int pass,min_index,i,last;
  last=len;
	for(pass=0;pass<len-1;pass++){
		for(i=0;i<last-1;i++){
			if(a[i] > a[i+1]){
			int temp;
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			}
		}
	  last=last-1;
	}
	printf("\nAfter Bubble Sort Array:\n");
	for(i=0;i<len;i++){
		printf("\nSorted Elements %d:",a[i]);
	}
}

void main(){
	int size,i,pass,min_index;
	int a[] = {20,45,6,78,60,2,5};
	int len = sizeof(a)/sizeof(a[0]);
    
    bubble(a,len);
		
}
