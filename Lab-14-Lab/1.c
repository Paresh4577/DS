#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
}*top;

void push(int x){
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->info=x;
	if(top==NULL){
		new->link=NULL;
		top=new;
	}
	else
	{
		new->link=top;
		top=new;
	}
}

void pop(){
	struct node *x;
	if(top==NULL){
		printf("Underflow");
	}
	else
	{
		x=top;
		top=top->link;
		free(x);
	}
}

void display(){
	struct node *x=top;
	if(top==NULL){
		printf("Stack is Empty!");
	}
	while(x!=NULL){
		printf("%d\t",x->info);
		x=x->link;
	}
}

void peek(int i){
   int c;
   struct node *save=top;
   if(top==NULL){
   	printf("Underflow!");
   }	
   else{
   	 for(c=1;c<i;c++){
   	 	save=save->link;
	 }
	 if(i>c){
     	printf("Element is not exist!");
     	return;
      }
	 printf("%d",save->info);
   }

}

void change(int x,int i){
   int c;
   struct node *save=top;
   if(top==NULL){
   	printf("Underflow!");
   }	
   else{
   	 for(c=1;c<i;c++){
   	 	save=save->link;
	 }
	 if(i>c){
   	  printf("Element is not exist!");
   	  return;
      }
	 save->info=x;
   }
   
}

void main(){
	int x,ch,i;
	while(1){
		printf("\n______MENU______\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEP\n5.CHANGE\n6.EXIT\n");
		printf("Enter a choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter element to insert in stack:");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Enter i to get position of element:");
				scanf("%d",&i);
				peek(i);
				break;
			case 5:
				printf("Enter i to get position of element:");
				scanf("%d",&i);
				printf("Enter element to change with Other Element:");
				scanf("%d",&x);
				change(x,i);
				break;
			case 6:
				exit(0);
		}
	}
}
