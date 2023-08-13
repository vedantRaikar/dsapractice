//
// Created by vedant raikar on 13-08-2023.
//
#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

struct node{
    int data ;
    struct node* next ;
};

int main() {
    struct node *head ;
    struct node *one = NULL  ;
    struct node *two = NULL ;
    struct node *three = NULL ;

    one = new node();
    two = new node();
    three = new node();

    one->data = 1;
    two->data = 3;
    three->data = 5;

    one->next = two ;
    two->next = three ;
    three->next = one ;


    head = one ;

    cout << three->next->data << one->next->data << two->next->data ;

}
