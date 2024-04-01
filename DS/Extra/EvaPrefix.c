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

	printf("Enter postfix : ");
	scanf("%s",post);
	
	int i=strlen(post)-1,j;
	
	while(i>=0){
		if(post[i]>='0'&&post[i]<='9'){
			push(post[i]-'0');
		}
		else if(isOperator(post[i]))
		{
			int op1=pop();
			switch(post[i]){
				case '+':
					push(op1+pop());
					break;
				case '-':
					push(op1-pop());
					break;
				case '*':
					push(op1*pop());
					break;
				case '/':
					push(op1/pop());
					break;
				case '%':
					push(op1%pop());
					break;
				case '^':
					push(pow(op1,pop()));
					break;
			}
		}
		i--;
	}
	printf("ans : %d",pop());
}
