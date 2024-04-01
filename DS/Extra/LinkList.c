#include<stdio.h>
#include<stdlib.h>
struct node{
       int info;
       struct node* link;
};
void insertAtFront(int element);
void insertAtLast(int element);
void deleteFromFront();
void deleteFromLast();
void display();
struct node* first = NULL;
int main(){
         int choice,item;
         
         while(1){
                printf("1. Insert element at front .\n");
                printf("2. Insert element at last .\n");
                printf("3. delete element from front .\n");
                printf("4. delete element from last .\n");
                printf("5. display.\n");
                printf("6. exit.\n");
                
                printf("Enter choice : ");
                scanf("%d",&choice);
                
                switch(choice){
                     case 1:
                          printf("Enter element : ");
                          scanf("%d",&item);
                          insertAtFront(item);
                          break;
                     case 2:
                          printf("Enter element : ");
                          scanf("%d",&item);
                          insertAtLast(item);
                          break;
                     case 3:
                          deleteFromFront();
                          break;     
                     case 4:
                          deleteFromLast();
                          break;     
                     case 5:
                        display();
                        break;
                     case 6:
                          exit(0);
                     default:
                             printf("Invalied choice....\n");
                }
         }
     return 0;
}
void insertAtFront(int element){
     struct node* new;
     new = (struct node*)malloc(sizeof(struct node));
     
     if(new==NULL){
         printf("Avalitibility stck underflow....\n"); 
         return ;
     }
     
     new->info=element;
     new->link=first;
    
     first = new;
     
     printf("inserted at front successfully....\n");
}
void display(){
     struct node* save = first;
     if(first==NULL){
         printf("empty..\n");
     }
     else{
       while(save->link!=NULL){
         printf("%d ",save->info);                       
         save=save->link;
       }
       printf("%d\n",save->info);
     }
     
}
void insertAtLast(int element){
     struct node* new;
     struct node* save=first;
     new = (struct node*)malloc(sizeof(struct node));
     
     if(new==NULL){
         printf("Avalitibility stck underflow....\n"); 
         return ;
     }

     new->info=element;
     new->link=NULL;
     
     if(first==NULL){
          first=new;
          return;
     }     
     
     
     while(save->link!=NULL){
           save=save->link;                        
     }
     
     save->link=new;
     printf("inserted at last successfully....\n");
}
void deleteFromFront(){
     if(first==NULL){
                     printf("Linked List is Empty....\n");
                     return;
     }
     struct node *ptr=first;
     first=first->link;
     free(ptr);
}
void deleteFromLast(){
     if(first==NULL){
                     printf("Linked List is Empty....\n");
                     return;
     }
     if(first->link==NULL){
           struct node *ptr=first;
           first=NULL;
           free(ptr);
           return;
     }
     struct node *Last=first,*SecondLast;
     while(Last->link!=NULL){
           SecondLast=Last;
           Last=Last->link;
     }
     SecondLast->link=NULL;
     free(Last);
}
