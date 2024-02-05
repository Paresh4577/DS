#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define s 5

int queue[s];
int front=-1,rear=-1;

void enqueue(int element);
void dequeue();
void display();
void enqueue_front(int element);
int dequeue_rear();

int main(){
    while(1){
           int choice,element;
           printf("---------------------Menu------------------------\n"); 
           printf("Enter Your Choice\n"); 
           printf("1. Enqueue \n");
           printf("2. Dequeue \n");
           printf("3. Display \n");
           printf("4. Insert At The Front \n");
           printf("5. Delete From Rear \n");
           printf("6. Exit : \n");
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
                 	 printf("Enter element : ");
                     scanf("%d",&element);
                     enqueue_front(element);
                    break;
                case 5:
                	 dequeue_rear();
                	break;
                case 6:
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

void enqueue_front(int element){
	if(front==0){
		printf("Overflow");
	}
	else{
		if(front==-1){
			front=rear=0;
		}
		else{
			front=front-1;
			queue[front]=element;
		}
	}
}
int dequeue_rear(){
	int element;
	if(rear==-1){
		printf("Underflow");
	}
	else{
		element = queue[rear];
		if(rear==front){
			rear=front=-1;
		}
		else{
			rear=rear-1;
			return element;
		}
	}
}
void display(){
     int i;
     if(front==-1)
          printf("Queue is Empty.....\n");
     else
     printf("\n\nOutput is Here:\n");
         for(i=front;i<=rear;i++){
             printf("%d\t",queue[i]);
         }     
     printf("\n");
}

