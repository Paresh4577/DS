#include<stdio.h>  
#include<conio.h> 
void main(){  
    int m, n,i,j,temp=0;  
    
    printf("Enter the number of rows: ");  
    scanf("%d", &m);  
    
    printf("Enter the number of columns: ");  
    scanf("%d", &n);  
    
    int matrix[m][m];  
    
    printf("Enter the elements of the matrix:\n");  
    for(i=0; i<m; i++){  
        for(j=0; j<n; j++){  
            scanf("%d", &matrix[i][j]);            
        }  
    }  
    
    
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		temp = matrix[i][j];
    		matrix[i][j]=matrix[j][i];
    		matrix[j][i]=temp;
		}
	}
	
	printf("The transposed matrix is:\n");  
    for(i=0; i<n; i++){  
        for(j=0; j<m; j++){  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  
	
	
}
