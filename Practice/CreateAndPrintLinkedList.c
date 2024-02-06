#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int info;
	struct node * next;
};

void PrintLinkedlistElement(struct node *ptr){
	while(ptr!=NULL){
		printf("Element : %d\n", ptr->info);
		ptr = ptr->next;
	}
}


void main(){
	struct node *first;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	
	first->info = 10;
	first->next = second;
	
	second->info = 20;
	second->next = third;
	
	third->info = 30;
	third->next = fourth;
	
	fourth->info = 40;
	fourth->next = NULL;
	
	PrintLinkedlistElement(first);
}
