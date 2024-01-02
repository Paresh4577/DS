#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
void main()
{
   int i,n;
   bool flag=false;
   
   printf("Enter a Number:");
   scanf("%d",&n);
   
   for(i=2;i<n-1;i++)
   {
   	  if(n%i==0)
   	  {
   	  	flag=true;
   	  	break;
	  }
	  else
	  {
	  	flag=false;
	  }
   }
   
   if(flag){
   	printf("The No Is Not Prime:");
   }
   else{
   	printf("The No Is Prime:");
   }
   
	

	
}
