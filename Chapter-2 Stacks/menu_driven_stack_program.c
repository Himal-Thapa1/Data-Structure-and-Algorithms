#include<stdio.h>
#include<conio.h>
int stack[100],i,j,n,top=-1;
void push();
void Pop();

void display();
int main(){
    int choice;
    printf("Enter the number of elements is the stack: \n");
    scanf("%d",&n);
    printf("----------stack using the array----------\n");
    while(choice!=4)
    {
        printf("Choose one from the following options: \n");
        printf("1. Push\n2. Pop\n3.Show\n4. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        
        switch(choice){
            case 1: 
                push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                display();
                break;

            case 4: 
                printf("Exiting .........");
                break;
            default:
                printf("Invalid choice sucker!!!");

         }
    };

}
void push(){
    int val;
    if(top==n){
        printf("\nOverflow");
    }
    else{
        printf("Enter the value you want to push:\n");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}
void Pop(){
    if(top==-1){
        printf("Stack underflow...");
    }
    else{
        top--;
    }
}
void display(){
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    if(top==-1){
        printf("Stack is empty");
    }
}