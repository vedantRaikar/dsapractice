//
// Created by vedant raikar on 18-08-2023.
//

#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int count = 0 ;
struct Stack{
    int items[MAX];
    int top ;
}; typedef struct Stack st ;

void createstack(st *s){
    s->top = -1;
}

int isempty(st *s){
    if(s->top == -1 ){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(st *s){
    if(s->top == MAX - 1 ){
        return 1;
    }
    else{
        return 0;
    }
}
void push(st *s){
    int newitem ;
    if(isfull(s)){
        printf("Stack overflow !");
    }
    else{
        printf("Enter the element to be pushed: ");
        scanf(" %d " , &newitem);
        s->top++;
        s->items[s->top] = newitem;
        count ++ ;
    }


}
void pop(st *s){
     if(isempty(s)){
          printf("Stack Underflow .");
     }
     else{
         printf("The poped item: %d" , s->items[s->top]);
         s->top-- ;
         count-- ;
     }
}
void peek(st * s ){
    if(isempty(s)){
        printf("Stack Underflow");
    }
    else{
        printf("The peek element is : %d " , s->items[s->top]);
    }
}

void printstack(st *s){
    if(isempty(s)){
        printf("Stack underflow.");
    }
    else{
        for(int i = 0 ; i < count ; i++){
            printf("%d , " , s->items[i]);
        }
    }
}

int main(){
    int ch ;
    st *s = (st *)malloc(sizeof(st));

do {
    printf("Enter the choice :\n");
    printf("1)PUSH\n");
    printf("2)POP\n");
    printf("3)PEEK\n");
    printf("4)PRINT\n");
    printf("5)exit\n");
    scanf(" %d ", &ch);

    switch (ch) {
        case 1:
            push(s);
        case 2:
            pop(s);
        case 3:
            peek(s);
        case 4 :
            printstack(s);
    }
}while( ch != 5 );

    return 0;
}