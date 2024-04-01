#include<stdio.h>
#define s 5

int queue[s];
int front=-1,rear=-1;

void enqueueAtFront(int element);
void enqueueAtRear(int element);
void dequeueFromFront();
void dequeueFromRear();
void display();

int main(){
    while(1){
           int choice,element;
           printf("---------------------Menu------------------------\n"); 
           printf("1. Enqueue At Front \n");
           printf("2. Enqueue At Rear  \n");
           printf("3. Dequeue From Front \n");
           printf("4. Dequeue From Rear  \n");
           printf("5. Display \n");
           printf("6. exit \n");
           printf("Enter your choice : ");
           scanf("%d",&choice);
           
           switch(choice){
                 case 1:
                      printf("Enter element : ");
                      scanf("%d",&element);
                      enqueueAtFront(element);
                      break;
                 case 2:
                      printf("Enter element : ");
                      scanf("%d",&element);
                      enqueueAtRear(element);
                      break;
                 case 3:
                      dequeueFromFront();
                      break;
                 case 4:
                      dequeueFromRear();
                      break;
                 case 5:
                      display();
                      break;
                 case 6:
                      exit(0);
                 default :
                         printf("Invalied choice........\n");
           }
    }
    return 0;
}

void enqueueAtRear(int element){
     if(rear>=s-1){
          printf("Queue Overflow.....\n");
          return ;
     }
     queue[++rear]=element;
     if(front==-1)
          front=0;
}
void enqueueAtFront(int element){
     if(front==-1){
           queue[++front]=element;
           rear++;
           return;              
     }

     if(front==0){
          printf("Queue Overflow.....\n");
          return;
     }
     queue[--front]=element;
}
void dequeueFromFront(){
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
void dequeueFromRear(){
    int element;   
    if(rear==-1){
        printf("Queue Underflow.....\n");
        return;
    }
    element=queue[rear];
    if(front==rear)
         front=rear=-1;
    else
         rear--;
    
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
