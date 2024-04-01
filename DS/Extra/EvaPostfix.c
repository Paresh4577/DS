#include<stdio.h>
#include<math.h>
#define s 100

int stack[s],top=-1;
void push(int element){
	stack[++top]=element;
}
int pop(){
	return stack[top--];
}
int isOperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'||ch=='^')
		return 1;
	else 
		return 0;
}
void main(){
	char post[s];
	int i=0,j;
	
	printf("Enter postfix : ");
	scanf("%s",post);
	
	while(post[i]!='\0'){
		if(post[i]>='0'&&post[i]<='9'){
			push(post[i]-'0');
		}
		else if(isOperator(post[i]))
		{
			int op2=pop();
			switch(post[i]){
				case '+':
					push(pop()+op2);
					break;
				case '-':
					push(pop()-op2);
					break;
				case '*':
					push(pop()*op2);
					break;
				case '/':
					push(pop()/op2);
					break;
				case '%':
					push(pop()%op2);
					break;
				case '^':
					push(pow(pop(),op2));
					break;
			}
		}
		i++;
	}
	printf("ans : %d",pop());
}
