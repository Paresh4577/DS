#include<stdio.h>
#define n 5
int top=-1;
int s[n];
int i,x;

void push(int x){
	if(top>=n-1){
		printf("Stack Overflow");
		return;
	}
	s[top+1]=x;
}
void pop(){
	if(top<-1){
		printf("Stack Underflow\n");
	}
	 s[top--];
}
int peep(int i){
	if(top-i<0){
		printf("Stack Underflow\n");
		return 0;
	}
	return s[top-i+1];
}
int change(int i,int x){
	if(top-i+1 <= -1){
		printf("Check Underflow");
		return -1;
	}
	return s[top-i+1]=x;
}
void show(){
	int i;
	printf("Stack Is Here:\n");
	for(i=top;i>=0;i--){
		printf("%d\n",s[i]);
    	}
	}

void main(){
	while(1){
		int choice;
		printf("____________Menu____________\n");
		printf("Enter a Choice:");
		printf("\n1.Push.\n2.Pop.\n3.Peep.\n4.Change.\n5.Display.\n6.Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter Elemnent To push:");
				scanf("%d",&x);
				push(x);
					if(top>=n){
		printf("Stack Overflow");
              	}
         	else{
	    	top = top+1;
		         s[top]=x;
               	}
				break;
			case 2:
				pop();
				if(x==-1){
					printf("Stack Overflow:\n");
				}
				else{
					printf("%d is the popped element:\n",x);
				
				}
				break;
			case 3:
				printf("Enter i:");
				scanf("%d",&i);
				x=peep(i);
				if(x==-1){
					printf("Ith element not available:\n");
				}
				else{
					printf("%d is the Ith element\n",x);
				}
				break;
			case 4:
				printf("Enter i:");
				scanf("%d",&i);
				printf("Enter x:");
				scanf("%d",&x);
				change(i,x);
				break;
			case 5:
				show();
				break;
			case 6:
				exit(0);
				break;
			default :
				printf("Invalid Choice...!");
		}
	}
}
