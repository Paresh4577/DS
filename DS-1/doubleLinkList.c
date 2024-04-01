#include<stdio.h>
#include<stdlib.h>
struct node {
	int info;
	struct node *lptr,*rptr;
}*first,*last;

void insertFirst(int x)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = x;
    if(first==NULL){
    	first=last=new_node;
    	first->lptr=NULL;
    	first->rptr=NULL;
    	return;
	}
	new_node->rptr=first;
	first->lptr=new_node;
	new_node->lptr=NULL;
	first=new_node;
}

void insertLast(int x){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = x;
    if(first==NULL){
    	first=last=new_node;
    	first->lptr=NULL;
    	first->rptr=NULL;
    	return;
	}
	last->rptr=new_node;
	new_node->rptr=NULL;
	new_node->lptr=last;
	last= new_node;
}

void firstToLast(){
	struct node *temp = first;
	while(temp!=NULL){
		printf("%d  ",temp->info);
		temp=temp->rptr;
	}
	printf("\n");
	
}

void lastToFirst(){
	struct node *temp=last;
	if(first==NULL){
		printf("List is Empty!");
		return;
	}
	while(temp!=first){
		printf("%d\t",temp->info);
		temp=temp->lptr;
	}
	printf("%d\t",temp->info);
}

void main(){
	
    int ch, x;
    while (1)
    {
        printf("1.InsertatFirst\n");
        printf("2.Insert At Last\n");
        printf("3.Delete at First\n");
        printf("4.Delete at Last\n");
        printf("5.Delete Specific Node\n");
        printf("6.Display frist to last \n");
        printf("7.Display last to first \n");
        printf("8.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value to Insert First");
            scanf("%d", &x);
            insertFirst(x);
            break;
        case 2:
            printf("Enter Value to Insert Last");
            scanf("%d", &x);
            insertLast(x);
            break;
//        case 3:
//            printf("Delete First");
//            x = deleteFirst();
//            printf("Delete Node is %d", x);
//            break;
//        case 4:
//            printf("Delete Last");
//            x = deleteLast();
//            printf("Delete Node is %d", x);
//            break;
//        case 5:
//            printf("Delete Specific");
//            printf("Enter Value to Insert Last");
//            scanf("%d", &x);
//            x=specificDelete(x);
//            printf("Delete Node is %d", x);
//            break;
        case 6:
            firstToLast();
            break;
        case 7:
        	lastToFirst();
        	break;
        case 8:
            exit(0);
        }
    }
    	
}
