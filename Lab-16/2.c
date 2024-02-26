//This is Double Ended Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *lptr,*rptr;
};

struct node *first=NULL;
struct node *last=NULL;
void insertatFirst(int x);
void showFirstToLast();
void showLastToFirst();
void insertatLast(int x);
void delete_specific(int y);
int del_first();
int del_last();

void main(){
	int x,ch,y;
	while(1){
		printf("\n------------------");
		printf("\n\tMenu\n");
		printf("------------------");
	    printf("\n1.Insert at first\n2.Insert at last\n3.show first to last \n4.Show last to first\n5.Delete a First Node\n6.Delete a Last Node\n7.Exit:\n");
		printf("Enter a Choice:");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("Enter element to insert:");
				scanf("%d",&x);
				insertatFirst(x);
				break;
			case 2:
				printf("Enter element to insert:");
				scanf("%d",&x);
				insertatLast(x);
				break;
			case 3:
				showFirstToLast();
				break;
			case 4:
				showLastToFirst();
				break;
			case 5:
                del_first();
                break;
			case 6:
				del_last();
				break;
			case 7:
				exit(0);
		}
	}
	
}

void showLastToFirst(){
	struct node *save=last;
	if(first==NULL){
		printf("List is Empty!");
		return;
	}
	while(save!=first){
		printf("%d\t",save->info);
		save=save->lptr;
	}
	printf("%d\t",save->info);
}

void showFirstToLast(){
	struct node *save=first;
	if(first==NULL){
		printf("List is Empty!");
		return;
	}
	while(save!=last){
		printf("%d\t",save->info);
		save=save->rptr;
	}
	printf("%d\t",save->info);
}

void insertatFirst(int x){
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
		new->info=x;
		new->lptr=NULL;
		new->rptr=NULL;
	if(last==NULL){
		first=last=new;
	}
	else{
		new->rptr = first;
        first->lptr = new;
        first = new;
        
		
	}
}

void insertatLast(int x)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
		new->info=x;

	if(last==NULL){
		first=last=new;
		new->lptr=NULL;
		new->rptr=NULL;
	}
	else{
		last->rptr=new;
		new->lptr=last;
		new->rptr=NULL;
		last=new;
	}
}

void delete_specific(int y){
	struct node *prev,*save;
	if(last==NULL){
		printf("Underflow");
	}
	else{
		if(y==first->info){
			if(first==last){
				first=last=NULL;
			}
			else{
				save=first;
				(first->rptr)->lptr=NULL;
				first=first->rptr;
				free(save);
			}
		}
		else{
			save=prev=first;
			while((save->info!=y) && (save!=last)){
				prev=save;
				save=save->rptr;
			}
			if(save->info==y){
				prev->rptr=save->rptr;
				(save->rptr)->lptr=prev;
				free(save);
			}
		}
	}
}

int del_first(){
	if(first==last){
		free(first);
		first=last=NULL;
		return;
	}
	else{
	struct node *save=first;
	first=first->rptr;
	free(save);
	save=NULL;
	first->lptr=NULL;
	return first;
  }
}

int del_last(){
	if(first==last){
		free(first);
		first=last=NULL;
		return;
	}
	else{
	struct node *save=first;
	struct node *pred;
	while(save->rptr!=NULL){
		save=save->rptr;
	}
	pred=save->lptr;
	free(save);
	save=NULL;
	pred->rptr=NULL;
	return first;
  }
}


