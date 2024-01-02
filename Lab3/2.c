#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;
   int a[3][2] = {{1,1},{2,2},{3,3}};
   int b[2][3] = {{1,1,1},{2,2,2}};
   int c[3][3];
   int n1=3; //number of rows in Matrix-1
   int n2=2; // number of columns in Matrix-1
   int n3=2; // number of rows in Matrix-2
   int n4=3; //number of columns in Matrix-2
   
   for(i=0;i<n1;i++){
   	for(j=0;j<n4;j++){
	    c[i][j]=0;
	   for(k=0;k<n3;k++){
	   	c[i][j] += a[i][k]*b[k][j];
   		
	   }
	   printf("%d\t",c[i][j]," ");
   		
	   }
	   printf("\n");
   }
   
}
