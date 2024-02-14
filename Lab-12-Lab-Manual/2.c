#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
}*first,*last;

void insert_first(int x){
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node*));
	
	if(first==NULL){
		new->info=x;
		new->link=NULL;
		first=new;
		last=new;
	}
	
	else{
		new->info=x;
		new->link=first;
		first=new;
	}
}

void insert_last(int x){
	struct node *new,*save;
	new = (struct node*)malloc(sizeof(struct node));
	new->info=x;
	if(first==NULL){
		new->link=NULL;
		first=new;
		last=new;
	}
	else{
	  
	  new->link=NULL;
	  last->link=new;
	  last=new;
	}
}

void display(){
	struct node *save;
    save=first;
    while(save!=NULL){
    	printf("%d\t",save->info);
    	save=save->link;
	}
	printf("%d",countNodes());
}

void countNodes(){
	int count=0;
	struct node *save;
    save=first;
    while(save!=NULL){
    	save=save->link;
    	count++;
	}
	printf("Total Nodes Are %d \t \n:",count);
}

void main(){
	int fx,lx,ch;
	while(1){
		printf("__________Menu___________");
		printf("\n1.Insert_First\n2.Insert_Last\n3.Display\n4.Count_Total_Nodes\n5.Exit\n");
		printf("______________________________\n");
		printf("Enter a Choice:");
		scanf("%d",&ch);
		printf("______________________________\n");
		switch(ch){
			case 1:
				printf("Enter a element to Insert at a First:");
				scanf("%d",&fx);
				insert_first(fx);
				break;
			case 2:
				printf("Enter a element to Insert at a Last:");
				scanf("%d",&lx);
				insert_last(lx);
				break;
			case 3:
				display();
				break;
			case 4:
				countNodes();
				break;
			case 5:
				exit(0);
				
		}
	}

	
}
