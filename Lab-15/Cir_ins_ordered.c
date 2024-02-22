#include<stdio.h>
#include<stdlib.h>


struct node{
	int info;
	struct node *link;
}*first,*last;

void cir_ins_ordered(int y){
	struct node *new=(struct node*)malloc(sizeof(struct node*)),*save;
	new->info=y;
	if(first==NULL){
		new->link=new;
		first=last=new;
	}
	else{
		if(new->info <= first->info){
			new->link=first;
			last->link=new;
			first=new;
		}
		else{
			save=first;
			while(save!=last && new->info >= (save->link)->info){
				save=save->link;
			}
			new->link=save->link;
			save->link=new;
			if(save==last){
				last=new;
			}
		}
	}
}

void display(){
	struct node *save;
	save=first;
	printf("The Elements of Ordered Circular Linked List:\n");
	while(save->link!=first){
		printf("%d \t",save->info);
		save=save->link;
	}
	printf("%d\t",save->info);
}

void main(){
	int y,ch;
	while(1){
		printf("\n_________Menu_________\n");
		printf("\n1.Cir_Insert in Ordered\n2.Display\n3.Exit\n");
		printf("Enter a Choice:\n");
	    scanf("%d",&ch);
	    
		
		switch(ch){
			case 1:
			printf("Enter a Element to In Ordered:");
         	scanf("%d",&y);
			cir_ins_ordered(y);
			break;
			case 2:
			display();
			break;
			case 3:
            exit(0);
		}
	}
}
