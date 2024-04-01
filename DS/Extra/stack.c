#include<stdio.h>
#define s 3

int stack[s];
int top=-1;

void push(int element);
void pop();
void display();
int peep(int i);
void  change(int i,int element);

int main(){
    int choice,element,i;
    
    while(1){
        
        printf("--------------Menu------------\n");
        printf("1. push \n");
        printf("2. pop \n");
        printf("3. display \n");
        printf("4. change \n");
        printf("5. peep \n");
        printf("6. exit \n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Enter Element : ");
                scanf("%d",&element);
                push(element);
                break;
            case 2: 
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Enter i : ");
                scanf("%d",&i);
                printf("Enter Element : ");
                scanf("%d",&element);
                change(i,element);
                break;
            case 5:
                printf("Enter i : ");
                scanf("%d",&i);
                element=peep(i);
                printf("peep element : %d\n",element);
                break;
            case 6:
                exit(0);
            default :
                printf("Invalid choice.....");
        }
        
    }
    //getch();
    //return 0;
}
void push(int element){
     if(top>=s-1){
         printf("Stack OverFlow...\n");
         return;
     }
     stack[++top]=element;
}
void pop(){
    if(top<0){
         printf("Stack UnderFlow...\n");
    }
    else{
         printf("pop element is : %d \n",stack[top--]);    
    }
}
int peep(int i){
    if((top-i+1)<0){
         printf("Stack UnderFlow...\n");
         return -1;
    }
    return stack[top-i+1];
}
void  change(int i,int element){
    if((top-i+1)<0){
         printf("Stack UnderFlow...\n");
         return ;
    }
    stack[top-i+1] = element;
}
void display(){
     int i;
     if(top==-1)
                printf("stack is empty...\n");
     else
     for(i=top;i>=0;i--){
           printf("%d\n",stack[i]);
     }
}
