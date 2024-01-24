#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
char stack[100];
int top=-1;
//char x;
void push(char x){
	stack[++top]=x;
}
char pop(){
	return stack[top--];
}
int is_operator(char exp){
	if(exp=='+'||exp=='-'||exp=='*'||exp=='/'||exp=='%'||exp=='^')
		return 1;
	else
	    return 0;
}
int result(char exp,int op1,int op2){
	switch(exp){
		case '+':
			return op1+op2;
			break;
		case '-':
			return op1-op2;
			break;
		case '*':
			return op1*op2;
			break;
		case '/':
			return op1/op2;
			break;
		case '%':
			return op1%op2;
			break;
		case '^':
			return pow(op1,op2);
			break;
		
	}
}

void main(){
	char exp[100],c,post[100],x;
	int i=0,j,ans,num,op1,op2;
	printf("Enter Infix exp:");
	scanf("%s",exp);
	

	i=0,j=0;
	while(exp[i]!='\0'){
		
		if (isdigit(exp[i])){
		num = exp[i]-'0';
			push(num);
		}
		else if(is_operator(exp[i])){
			op2=pop();
	        op1=pop();
			ans = result(exp[i],op1,op2);
			push(ans);
		}
		
		i++;
	}
	printf("%d",pop());
	
		
}
