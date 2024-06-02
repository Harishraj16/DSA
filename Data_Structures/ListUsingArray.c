#include <stdio.h>
#define MAX_SIZE 50

int arr[MAX_SIZE];
int size = 0;

void display(){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

void insertAtPos(int pos,int val){
    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    size++;
    printf("Inserted %d at positon %d",val,pos);
}

void deleteFromPos(int pos){
    int del = arr[pos];
    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("Deleted %d from position %d.",del,pos);
}

int main() {
    int choice,val,pos;
    while(1){
        printf("\n -------- List Menu -----------\n");
        printf("1.Insert at end \n");
        printf("2.Insert at specified pos \n");
        printf("3.Delete at specified pos \n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("\n--------------------------------------\n");
        printf("Enter your choice:\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    if(size>=MAX_SIZE){
                        printf("Memory Full!");
                        break;
                    }
                    printf("Enter the Data:");
                    scanf("%d",&val);
                    arr[size++]=val;
                    break;
            case 2:
                    if(size>=MAX_SIZE){
                        printf("Memory Full!");
                        break;
                    }
                    printf("Enter the position(position initially 0):");
                    scanf("%d",&pos);
                    if(pos<0 || pos>=size){
                        printf("Ivalid position!");
                        break;
                    }
                    printf("Enter the Data:");
                    scanf("%d",&val);
                    insertAtPos(pos,val);
                    break;
            case 3:
                    if(size==0){
                        printf("Array is Empty!");
                        break;
                    }
                    printf("Enter the position(position initially 0):");
                    scanf("%d",&pos);
                    if(pos<0 || pos>=size){
                        printf("Invalid position!");
                        break;
                    }
                    deleteFromPos(pos);
                    break;
            case 4:
                    display();
                    break;
            case 5:
                    exit(0);
        }
    }
    return 0;
}
