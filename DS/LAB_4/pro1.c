#include<stdio.h>
void main(){
     int size,i;
    printf("Enter size : ");
    scanf("%d",&size);
    
    int arr[size];
    
    for(i=0;i<size;i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int *ptr = arr;
    
    for(i=0;i<size;i++){
        printf("%d Element : %d\n",i+1,*ptr+i);
    }
    getch();
}
