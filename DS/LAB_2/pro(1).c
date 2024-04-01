#include<stdio.h>
void main(){
	int s,sum,i;
	float avg;
	
	printf("Enter size of array : ");
	scanf("%d",&s);
	
	int arr[s];
	
	for(i=0;i<s;i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
		printf("sum of array : %d\n",sum);
		avg=sum/s;
		printf("average of array : %f\n",avg);
		printf("average of array : %d",(sum/s));
	
	
}
