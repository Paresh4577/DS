#include<stdio.h>
#define s 5

int queue[s];
int front=-1,rear=-1;

void enqueue(int element);
void dequeue();
void display();

int main(){
    while(1){
           int choice,element;
           printf("---------------------Menu------------------------\n"); 
           printf("1. Enqueue \n");
           printf("2. Dequeue \n");
           printf("3. Display \n");
           printf("4. exit \n");
           printf("Enter your choice : ");
           scanf("%d",&choice);
           
           switch(choice){
                 case 1:
                      printf("Enter element : ");
                      scanf("%d",&element);
                      enqueue(element);
                      break;
                 case 2:
                      dequeue();
                      break;
                 case 3:
                      display();
                      break;
                 case 4:
                      exit(0);
                 default :
                         printf("Invalied choice........\n");
           }
    }
    return 0;
}

void enqueue(int element){
     if(rear>=s-1){
          printf("Queue Overflow.....\n");
          return ;
     }
     queue[++rear]=element;
     if(front==-1)
          front=0;
}
void dequeue(){
    int element;
    if(front==-1){
        printf("Queue Underflow.....\n");
        return;
    }
    element=queue[front];
    if(front==rear)
         front=rear=-1;
    else
         front++;
    
    printf("Dequeue element : %d\n",element);
}

void display(){
     int i;
     if(front==-1)
          printf("Queue is Empty.....\n");
     else
         for(i=front;i<=rear;i++){
             printf("%d\t",queue[i]);
         }     
     printf("\n");
}
