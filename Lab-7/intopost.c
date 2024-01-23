#include<stdio.h>
#include<string.h>
#include<conio.h>

char stack[100];
int top=-1;
//char x;
void push(char x){
	stack[++top]=x;
}
char pop(){
	return stack[top--];
}
int priority(char x){
	if(x=='('){
		return 0;
	}
	else if(x=='+'||x=='-'){
		return 1;
	}
	else if(x=='*'||x=='/'||x=='%'){
		return 2;
	}
	else if(x=='^'){
		return 3;
	}
	return -1;
}

void main(){
	char exp[100],c,post[100],x;
	int i,j;
	printf("Enter Infix exp:");
	scanf("%s",exp);
	
	strcat(exp,")");
	push('(');
	i=0,j=0;
	while(exp[i]!='\0'){
		c = exp[i];
		if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
			post[j++]=c;
		}
		else if(c=='('){
			push(c);
		}
		else if(c==')'){
			x=pop();
			while(x!='('){
				post[j++]=x;
				x=pop();
			}
		}
		else{
			while(priority(stack[top])>=priority(c)){
				x=pop();
				post[j++]=x;
			}
			push(c);
			
		}
		i++;
		
	}
	post[j]='\0';
		printf("PostFix Expression %s",post);
		
}
