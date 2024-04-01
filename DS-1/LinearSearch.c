#include<stdio.h>
void binarySearch(int arr[],int l,int r,int x){
	
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==x){
			printf("%d ",mid);
			return;
		}
		if(x<arr[mid]){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
}

void main(){
	int arr[]={1,2,3,4,5,6};
	binarySearch(arr,0,5,4);
}
