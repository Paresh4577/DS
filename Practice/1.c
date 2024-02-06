#include<stdio.h>
#include<conio.h>
#define n 4  
int top=-1,x,a,i;

int s[n];


void main(){
 int choice;
 while(1){
 	printf("\nChoose a Choice to Perform Operation");
 	printf("\n1.Push\n2.Pop\n3.Show\n4.exit\n");
 	scanf("%d",&choice);
 	switch(choice){
 	case 1:
 			push();
 			break;
 	case 2:
 			pop();
 			break;
 	case 3:
 			show();
 			break;
	case 4:
		break;
 }
	   		
    }

}

void show(){
	int i;
	printf("Stack Is Here:\n");
	for(i=top;i>=0;i--){
		printf("%d\n",s[i]);
    	}
	}

int push(){
int x;
printf("Enter Element to insert:");
scanf("%d",&x);
	if(top>=n){
		printf("Stack Overflow");
	}
	else{
		top = top+1;
		s[top]=x;
	}
}

int pop(){
	if(top<0){
		printf("Stack Underflow\n");
		return -1;
	}
	else{
		top = top-1;
		return s[top+1];
	}	
}

int peep()


 
    
             
    
