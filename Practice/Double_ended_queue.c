#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 50
int cq[n];
int r=-1,f=-1,i,y;

//void cenqueue(int y){
//  if(r==n-1){
//  	r=0;
//  }	
//  else{
//  	r++;
//  }
//  if(f==r){
//  	printf("Queue Overflow");
//  
//  }
//  else{
//  	cq[r]=y;
//  	if(f==-1){
//  		f=0;
//  		
//	  }
//  }
//}
int dequeue_delete_rear(){
	if(r==0){
		printf("Underflow");
	}
	else{
		y=cq[r];
		if(r==f){
			r=f=0;
		}
		else{
			r=r-1;
		}
		return y;
	}
	printf("The Deleted Element From the End IS %d ",y);
}
void dequeue_front(int y){
	if(f==0){
		printf("Overflow");
	}
	else{
		if(f==-1){
			f=r=0;
		}
		else{
			f=f-1;
		}
		cq[f]=y;
		
	}
}
void cenqueue(int y){
	if(r==n-1 && f==0 || (r+1==f)){
		printf("Overflow");
	}
	else{
		r=(r+1)%n;
		cq[r]=y;
		if(f==-1){
			f=0;
		}
	}
}
int cdequeue_front(){
	if(f==-1){
		printf("Queue Underflow");
		return 0;
	}
	else{
		y=cq[f];
		if(f==r){
			f=r=-1;
			return y;
		}
		else if(f==n){
			f=0;
		}
		else{
			f++;
			return y;
		}
	}
} 

void display(){
     int i;
     if(f==-1)
          printf("Queue is Empty.....\n");
     else
         for(i=f;i<=r;i++){
             printf("%d\t",cq[i]);
         }     
     printf("\n");
} 

//void display(){
//	if(f==-1){
//		printf("Queue Underflow");
//	}
//	else if(f<=r){
//		for(i=f;i<=r;i++){
//			printf("%d ",cq[i]);
//		}
//	}
//	else{
//		for(i=f;i<=n-1;i++){
//			printf("%d ",cq[i]);
//		}
//		for(i=0;i<=r;i++){
//			printf("%d ",cq[i]);
//		}
//	}
//}                       

void main(){
	int ch,y;
	while(1){
		printf("\n_________Menu_________\n");
		printf("Bhai Su Krvu 6 Tare?:");
		printf("\n1.CqInsert\n2.Cqdelete\n3.Display\n4.Insert_at_Front\n5.Delete_at_rear\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
			printf("Enter element to Insert:");
			scanf("%d",&y);
			cenqueue(y);
			break;
			case 2:
			cdequeue_front();
			break;
			case 3:
			display();
			break;
			case 4:
			printf("Enter element to Insert From The Front:");
			scanf("%d",&y);
			dequeue_front(y);
			break;
			case 5:
			dequeue_delete_rear();
			break;
			case 6:
			exit(0);
			default :
				printf("Ae Bhai Aa No Hale...!");
		}
	}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
