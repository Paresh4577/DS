#include<stdio.h>
void main(){
	
	int r,c,i,j;
	printf("Enter row of array : ");
	scanf("%d",&r);
	printf("Enter column of array : ");
	scanf("%d",&c);
	
	int arr1[r][c] , arr2[r][c],ans[r][c];
	
	printf("Enter first array : \n");
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("Enter [%d][%d] element : ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}	
	}
	
	printf("Enter second array : \n");
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("Enter [%d][%d] element : ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
			ans[i][j]=arr1[i][j]-arr2[i][j];
		}	
	}
	
	printf("Subtraction Ans Array : \n");
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("%d ",ans[i][j]);
		}	
		printf("\n");
	}
	getch();
	
}
