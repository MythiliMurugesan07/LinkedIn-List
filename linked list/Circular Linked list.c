#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void append(int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;

    if(head == NULL){
        head = newNode;
        newNode->next = head;  
    }
    else{
        struct node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;  
    }
}

void display(){
    if(head == NULL)
        return;

    struct node *temp = head;
    do{
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp != head);
}

int main(){
    int n, data;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter data in the nodes: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &data);
        if(data > 0){
            append(data);
        }
    }

    printf("The data in the nodes are: ");
    display();

    return 0;
}
