//
// Created by vedant raikar on 13-08-2023.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

struct Node{
    int data ;
    struct Node* next;
};

//insert at the begining
void insertAtBeginning(struct Node** head_ref , int new_data){
     struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
     new_node->data = new_data;
     new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//insert a node after a node
void insertafter(struct Node* prev_node , int new_data){
    if(prev_node == NULL ){
        cout<< "the previous node cannot be NULL";
        return ;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node ;

}

//insert at the end
void insertatend(struct Node** head_ref , int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data ;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return ;
    }

    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return ;
}

//delete the node
void deletenode(struct Node** head_ref , int key){
    struct Node *temp = *head_ref ;
    struct Node *prev ;

    if(temp != NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return ;
    }
    while(temp != NULL && temp->data != key){
        prev = temp ;
        temp = temp->next;
    }
    if(temp == NULL){
        return ;
    }
    prev->next = temp->next;
    free(temp);
}

bool searchnode( struct Node** head_ref ,  int key){
    struct Node* current = *head_ref;
    while(current != NULL) {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false ;

}

void sortlinkedlist( struct Node** head_ref){
    struct Node *current = *head_ref ;
    struct Node *index = NULL ;
    int temp;

    if(head_ref == NULL){
        return;
    }
    else{
        while(current != NULL){
            index = current->next ;

            while(index != NULL){
                if(current->data > index->data){
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp ;
                }
                index = index->next;
            }
            current = current->next;
        }
    }

}

void printList(struct Node* node){
    while (node != NULL){
        cout << node->data << " ";
        node = node->next;
    }

}

int main(){
struct Node* head = NULL ;

insertatend(&head , 1 );
insertAtBeginning(&head , 2);
insertAtBeginning(&head , 3);
insertatend(&head , 4);
insertafter(head->next , 5);

cout << "linked list: ";
printList(head);
cout << "\nafter deleting an element: ";
deletenode(&head , 3);
printList(head);

    int item_to_find = 3;
    if (searchnode(&head, item_to_find)) {
        cout << endl << item_to_find << " is found";
    } else {
        cout << endl << item_to_find << " is not found";
    }

    sortlinkedlist(&head);
    cout << "\nSorted List: ";
    printList(head);


}




