#include<stdio.h>
#include<conio.h>
#include <ctype.h> 

int s[n];
int i;
int top=0;
int value=0;
char ch;
int ans;
int choice;

void push(){
	printf("\nEnter a Element");
	scanf("%c",&ch);
	if(isdigit(ch)){
		top = top+1;
		s[top]=ch;
	}
	else{
		
	}
}

int pop(){
		if(top<0){
		printf("Stack Underflow\n");
		return -1;
      	}
        else{
		top = top-1;
        return value =  s[top+1];
        	}
		}

while(1){
	
	switch(choice){
		case 1:
			push();
			break;
	}
}
