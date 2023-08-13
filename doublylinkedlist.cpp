//
// Created by vedant raikar on 13-08-2023.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next ;
    struct Node* prev ;
};

int main(){
    struct Node *head ;
    struct Node *one = NULL ;
    struct Node *two = NULL ;
    struct Node *three = NULL ;

    one = new Node();
    two = new Node();
    three = new Node();

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two ;
    one->prev = NULL ;

    two->next = three;
    two->prev = one ;

    three->next = NULL ;
    three->prev = two ;

    head = two ;

    cout << head->prev->data << head->data << head->next->data ;


}

