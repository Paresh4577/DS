/*Simple Link list*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
} *first, *last;
void display(){
    struct node *temp = first;
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (temp!= NULL)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

// insert a new node
void insertFirst(int x)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = x;
    if (first == NULL)
    {
        first = last = new_node;
        new_node->link=NULL;
        display();
        return;
    }
    new_node->link = first;
    first = new_node;
    display();
}
void insertLast(int x)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = x;
    new_node->link=NULL;
    // if there is only one node.
    if (first == NULL)
    {
        first = last = new_node;
        return;
    }
    last->link = new_node;
    last = new_node;
    display();
}
/*Delete function.*/
int deleteFirst()
{
    struct node *temp = first;
    if (first == NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    int y = temp->info;

    if (first == last)
    {
        first = last = NULL;
        free(temp);
        return y;
    }
    first = first->link;
    free(temp);
    return y;
    display();
}

int deleteLast()
{
    int y;
    struct node *temp = first;
    if (first == NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    y = temp->info;
    if (first == last)
    {
        first = last = NULL;
        free(temp);
        return y;
    }
    while (temp->link != last)
    {
        temp = temp->link;
    }
    last = temp;
    temp->link=NULL;
    free(temp->link);
    return y;
}

int specificDelete(int x)
{
    struct node *temp = first, *pred = first;

    if (first == NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    if(first->info==x){
      return deleteFirst();
	}
	if(last->info==x){
		return deleteLast();
	}
    while (temp->info != x)
    {
        pred = temp;
        temp = temp->link;
    }
    if(temp==NULL){
    	printf("Sorry This Info is not in list!");
    	return -1;
	}
        pred->link = temp->link;
        int y = temp->info;
        free(temp);
        return y;
        display();
}
int main()
{
    int ch, x;
    while (1)
    {
        printf("1.InsertatFirst\n");
        printf("2.Insert At Last\n");
        printf("3.Delete at First\n");
        printf("4.Delete at Last\n");
        printf("5.Delete Specific Node\n");
        printf("6.Display\n");
        printf("7.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value to Insert First");
            scanf("%d", &x);
            insertFirst(x);
            break;
        case 2:
            printf("Enter Value to Insert Last");
            scanf("%d", &x);
            insertLast(x);
            break;
        case 3:
            printf("Delete First");
            x = deleteFirst();
            printf("Delete Node is %d", x);
            break;
        case 4:
            printf("Delete Last");
            x = deleteLast();
            printf("Delete Node is %d", x);
            break;
        case 5:
            printf("Delete Specific");
            printf("Enter Value to Insert Last");
            scanf("%d", &x);
            x=specificDelete(x);
            printf("Delete Node is %d", x);
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
        }
    }
    return 0;
}
