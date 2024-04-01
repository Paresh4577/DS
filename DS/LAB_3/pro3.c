#include<stdio.h>
int main(){
	
	int r1,c1,r2,c2,i,j,k;
	printf("Enter row for first array : ");
	scanf("%d",&r1);
	printf("Enter column for first array : ");
	scanf("%d",&c1);
	
	int arr1[r1][c1] ;
	
	printf("Enter first array : \n");
	for( i=0;i<r1;i++){
		for( j=0;j<c1;j++){
			printf("Enter [%d][%d] element : ",i,j);
			scanf("%d",&arr1[i][j]);
		}	
	}

	printf("Enter row for first array : ");
	scanf("%d",&r2);
	printf("Enter column for first array : ");
	scanf("%d",&c2);

	int arr2[r2][c2],ans[r1][c2];
    	
	if(c1!=r2){
		printf("sorry maltiplication is not allowed");	
		
	}
	
	printf("Enter second array : \n");
	for( i=0;i<r2;i++){
		for( j=0;j<c2;j++){
			printf("Enter [%d][%d] element : ",i,j);
			scanf("%d",&arr2[i][j]);
		}	
	}
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			ans[i][j]=0;
			for(k=0;k<r2;k++){
				ans[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	
	printf("Maltiplication Ans Array : \n");
	for( i=0;i<r1;i++){
		for( j=0;j<c2;j++){
			printf("%d ",ans[i][j]);
		}	
		printf("\n");
	}
	getch();
	return 0;
}
