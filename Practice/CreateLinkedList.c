#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int element;
	struct node *link;
};

void main(){
	struct node *head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	
	head->element = 50;
	head->link = NULL;
	
	printf("%d",head->element);
	
}
