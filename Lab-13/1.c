#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
}*first;

void insert_ordered(int y)
{
	struct node *new=(struct node*)malloc(sizeof(struct node*)),*save;
	new->info=y;
	if(first==NULL){
		first=new;
		new->link=NULL;
	}
	else if(new->info <= first->info)
	{
		new->link=first;
		first=new;
	}
	else{
		save=first;
		while(save->link!=NULL && ((new->info)>=((save->link)->info)))
		{
			save = save->link;
		}
		new->link=save->link;
		save->link=new;
	}
}

void delete_First(){
  if(first==NULL){
  	printf("Linked List Is Empty...\n");
  }	
  else{
  	struct node *ptr=first;
  	first=first->link;
  	free(ptr);
  }
}

void display(){
	struct node *save;
	save=first;
	while(save!=NULL){
		printf("%d\t",save->info);
		save=save->link;
	}
}

void main(){
	int y,ch;
	
	
	
	while(1){
		printf("_________Menu_________\n");
		printf("\n1.Insert Ordered\n2.Display\n3.Delete from First\n4.Delete From Last\n5.Exit\n");
		printf("Enter a Choice:\n");
	    scanf("%d",&ch);
	    
		
		switch(ch){
			case 1:
			
			printf("Enter a Element to Insert:");
         	scanf("%d",&y);
			insert_ordered(y);
			break;
			case 2:
			display();
			break;
			case 3:
			delete_First();
			break;
			case 4:
			break;
			case 5:
			exit(0);
		}
	}
	
}
