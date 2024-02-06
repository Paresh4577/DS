#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void beginInsert(){
	
	struct node{
	int element;
	struct node *link;
    };
    
    int item;

	struct node *head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	
	if(head==NULL){
		printf("Overflow");
	}
	else{
		printf("Enter Value:\n");
		scanf("%d",&item);
		head->element;
		head->link = head;
		printf("Node Inserted ");
	}
}

void main(){
	beginInsert();
}
