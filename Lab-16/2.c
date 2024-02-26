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

void main(){
	int x,ch,y;
	while(1){
	    printf("\n1.Insert at first\n2.Insert at last\n3.show first1 to last \n4.Show last to first\n5.Exit:\n");
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
				exit(0);
			case 6:
				printf("Enter Info of element to delete:");
				scanf("%d",&y);
                void delete_specific(int y);
                break;
			
		}
	}
	
}

void showLastToFirst(){
	struct node *save=first;
	while(save!=last){
		printf("%d\t",save->info);
		save=save->rptr;
	}
	printf("%d\t",save->info);
}
void showFirstToLast(){
	struct node *save=last;
	while(save!=first){
		printf("%d\t",save->info);
		save=save->lptr;
	}
	printf("%d\t",save->info);
}

//void dou_delete(){
//	if(last==NULL){
//		printf("Underflow");
//	}
//	else{
//		if()
//	}
//}


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


