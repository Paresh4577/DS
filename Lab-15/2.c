#include<stdio.h>
#include<stdlib.h>


struct node{
	int info;
	struct node *link;
}*first,*last;

void cir_ins_first(int y)
{
	struct node *new=(struct node*)malloc(sizeof(struct node*)),*save;
	new->info=y;
	if(first==NULL){
		new->link=new;
		first=last=new;
	}
	else 
	{
		new->link=first;
		last->link=new;
		first=new;
	}
}

void display(){
	struct node *save;
	save=first;
	while(save->link!=first){
		printf("%d \t",save->info);
		save=save->link;
	}
	printf("%d\t",save->info);
}
	
void main(){
	int y,ch;
	while(1){
		printf("_________Menu_________\n");
		printf("\n1.Cir_Insert at First\n2.Display\n3.Delete from First\n4.Delete From Last\n5.Exit\n");
		printf("Enter a Choice:\n");
	    scanf("%d",&ch);
	    
		
		switch(ch){
			case 1:
			printf("Enter a Element to Insert:");
         	scanf("%d",&y);
			cir_ins_first(y);
			break;
			case 2:
			display();
			break;
//			break;
//			case 3:
//			delete_First();
//			break;
//			case 4:
//			break;
			case 5:
			exit(0);
		}
	}
}
