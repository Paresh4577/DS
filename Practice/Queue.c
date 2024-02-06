#include<stdio.h>
#include<conio.h>
#define N 5
int f=-1,r=-1,y,i;
int q[N];

void enqueue(){
	printf("Enter element to Insert:");
	scanf("%d",&y);
	if(r>=N){
		printf("Queue Overflow");
	}
	else{
		r = r+1;
		q[r]=y;
		if(f==-1){
			f=0;
		}
		
	}
}
void show(){
	printf("Queue Is Here...\n");
	for(i=f;i<=r;i++){
		printf("%d\t",q[i]);
	}
}
void dequeue(){
	if(f==-1){
		printf("Queue Underflow");
		return;
	}
	y=q[f];
	if(f==r){
		f=r=-1;
	}
	else{
		f++;
	}
}
void dqinsertF(){
	printf("Enter element to Insert:");
	scanf("%d",&y);
	if(f=1){
		printf("Overflow");
	}
	else{
		if(f=-1){
			f=r=1;
		}
		else{
			f=f-1;
			q[f]=y;
		}
	}
}
void dqdeleteR(){
	if(r=-1){
		printf("Underflow");
	}
	else{
		y=q[r];
		if(r=f){
			r=f=-1;
		}
		else{
			r=r-1;
		}
	}
}
void main(){
	int ch;
	while(1){
		printf("\n1.Enqueue.\n2.Dequeue.\n3.Show.\n4.dqinsert\n5.dqdeleteR\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				show();
				break;
			case 4:
				dqinsertF();
				break;
			case 5:
				dqdeleteR();
				break;
			default:
				printf("Invalid Choice!");
		}
	}
}
