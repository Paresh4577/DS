#include<stdio.h>
int main(){
    int r,c,i,j;
	printf("Enter row of array : ");
	scanf("%d",&r);
	printf("Enter column of array : ");
	scanf("%d",&c);
	
	int arr1[r][c] ,ans[c][r];
	
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("Enter [%d][%d] element : ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}	
	}
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
             ans[j][i]=arr1[i][j];                   
       }
   }
	printf("transpose of matrix : \n");
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("%d ",ans[i][j]);
		}	
		printf("\n");
	}
	getch();
     return 0;
}
