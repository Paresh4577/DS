#include<stdio.h>
#define s 100
char stack[s],infix[s],post[s],c;
int top=-1;

void push(char element){
    stack[++top]=element;
}
char pop(){
    return stack[top--];
}
int priority(char ch1){
    switch(ch1){
              case '(':
                   return 0;
              case '+':
                   return 1;
              case '-':
                   return 1;
              case '*':
                   return 2;
              case '%':
                   return 2;
              case '/':
                   return 2;
              case '^':
                   return 3;
              default :
                      return -1;
    }
}

int main(){
    printf("Enter infix String : ");
    scanf("%s",infix);
    
    strcat(infix,")");
    push('(');
    
    int i=0,j=0;
    while(infix[i] != '\0'){
            c=infix[i];
            if(c=='('){
                 push(c);                  
            }
            else if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
                 post[j++]=c;    
            }
            else if(c == ')'){
                 char ch = pop();
                 while(ch!='('){
                       post[j++]=ch;
                       post[j]='\0';
                       ch=pop();
                 }
            }
            else {
                 //printf("5");
                 while(priority(stack[top])>=priority(c)){
                        post[j++]=pop();
                 }
                 push(c);
            }
//            printf("6");
            i++;
    }
    post[j]='\0';
    printf("postfix  :%s",post);
    getch();
    return 0;
}
