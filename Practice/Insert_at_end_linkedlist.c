#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node * link;
};
int x;

struct node* insert_end(struct node *head,int x){
	struct node *new , *ptr;
	ptr = head;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter The Info Of Node:");
	scanf("%d",&x);
	new->info = x;
	new->link = NULL;
	
	while(ptr->link!=NULL){
		ptr = ptr->link;
	}
	ptr->link = new;
}

void main(){
	struct node * head;
	head = (struct node*)malloc(sizeof(struct node));
	head->info = 45;
	head->link = NULL;
	
	struct node * ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->info = 44;
	ptr->link = NULL;
	
	head->link = ptr;
	
	insert_end(head,x);
	ptr = head;
	while(ptr!=NULL){
		printf("%d \n",ptr->info);
		ptr = ptr->link;
	}
}
