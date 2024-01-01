#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;
   int a[3][2] = {{1,2},{3,4},{5,6}};
   int b[2][3] = {{1,2,3},{3,4,5}};
   int c[3][3];
   
   
   for(i=0;i<2;i++){
   	for(j=0;j<2;j++){
	    c[i][j]=0;
	   for(k=0;k<3;k++){
	   	c[i][j] += a[i][k]+b[k][j];
   		printf("\n %d",c[i][j]," ");
	   }
   		
   		
	   }
   }
	

	

	
}
