#include<stdio.h>
void bubble(int arr[],int len){
	int i,j;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
}

void main(){
	int arr[]={66,44,3,5,78,-9};
	int len = sizeof(arr)/sizeof(arr[0]);
	bubble(arr,len);
}
