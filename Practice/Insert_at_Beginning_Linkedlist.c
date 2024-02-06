#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node * link;
};
int x;

struct node* insert_beginning(struct node *head,int x){
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter The Info Of Node:");
	scanf("%d",&x);
	new->info = x;
	new->link = head;
	head=new;
	
	return head;
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
	
	head = insert_beginning(head,x);
	ptr = head;
	while(ptr!=NULL){
		printf("%d \n",ptr->info);
		ptr = ptr->link;
	}
}
