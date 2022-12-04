#include<stdio.h>
#include<conio.h>

#define SIZE 20
struct queue
{
    /* data */
    int item[SIZE];
    int rear;
    int front;
};
typedef struct queue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);
void main(){
    int ch;
    qu *q;
    q->rear=-1;
    
}