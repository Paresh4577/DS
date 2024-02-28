#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
}*f,*r;

void enqueue(int x){
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->info=x;
	new->link=NULL;
	if(f==NULL){
		new->link=NULL;
		f=r=new;
	}
	else{
		r->link=new;
		r=new;
	}
}
void display(){
	struct node *save=f;
	while(save!=r){
		printf("%d\t",save->info);
		save=save->link;
	}
	printf("%d\t",save->info);
}

void dequeue(){
	
}

void main(){
	int x,ch,i;
	while(1){
		printf("\n______MENU______\n");
		printf("1.ENQUEUE\n2.POP\n3.DISPLAY\n4.PEEP\n5.CHANGE\n6.EXIT\n");
		printf("Enter a choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter element to insert in stack:");
				scanf("%d",&x);
				enqueue(x);
				break;
//			case 2:
//				pop();
//				break;
			case 3:
				display();
				break;
//			case 4:
//				printf("Enter i to get position of element:");
//				scanf("%d",&i);
//				peek(i);
//				break;
//			case 5:
//				printf("Enter i to get position of element:");
//				scanf("%d",&i);
//				printf("Enter element to change with Other Element:");
//				scanf("%d",&x);
//				change(x,i);
				break;
			case 6:
				exit(0);
		}
	}
}
