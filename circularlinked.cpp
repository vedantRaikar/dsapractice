//
// Created by vedant raikar on 18-09-2023.
//
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
    int data ;
    struct node *next ;
};

struct node *start = NULL ;
struct node *create_cll( struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node * );
struct node *delete_beg( struct node *);
struct node *delete_end( struct node *);
struct node *delete_after( struct node *);
struct node *delete_list( struct node *);

int main() {
    int option ;

    do{
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Delete a node from the beginning");
        printf("\n 6: Delete a node from the end");
        printf("\n 7: Delete a node after a given node");
        printf("\n 8: Delete the entire list");
        printf("\n 9: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: start = create_cll(start);
                printf("\n CIRCULAR LINKED LIST CREATED");
                break;
            case 2: start = display(start);
                break;
            case 3: start = insert_beg(start);
                break;
            case 4: start = insert_end(start);
                break;
            case 5: start = delete_beg(start);
                break;
            case 6: start = delete_end(start);
                break;
            case 7: start = delete_after(start);
                break;
            case 8: start = delete_list(start);
                printf("\n CIRCULAR LINKED LIST DELETED");
                break;
    }while(option != 9);
        getch();
        return 0 ;
    }





