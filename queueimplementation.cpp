//
// Created by vedant raikar on 15-08-2023.
//

#include<iostream>
#define size 10

using namespace std ;

class Queue{
private:
    int items[size] , front , rear ;
public:
    Queue(){
       front = -1 ;
       rear = - 1;
    }

    bool isFull(){
        if(front == 0 && rear == size -1 ){
            return true ;
        }
        return false ;
    }

    bool isEmpty(){
        if(front == -1){
            return true ;
        }
        else{
            return false;
        }
    }

    void enQueue(int element){
        if(isFull()){
            cout<<"The queue is full";
        }
        else{
            if(front == -1){front = 0;}
            rear++;
            items[rear] = element ;
            cout << endl <<"Inserted" << element << endl ;
        }
    }

    int  deQueue(){
        int element;
        if(isEmpty()){
            cout<<"the queue is empty";
            return (-1);
        }
        else{
            if( front >= rear){ //this means there is only one value so we reset the queue
                front = -1 ;
                rear = -1 ;
            }
            else  {
                front++;
            }
            cout << endl << "deleted ->" << element << endl ;
            return(element);
        }
    }

    void display(){
        int i ;
        if(isEmpty()){
            cout << endl << "Empty queue" << endl ;
        }
        else {
            cout << endl
                 << "Front index-> " << front;
            cout << endl
                 << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl
                 << "Rear index-> " << rear << endl;
        }
    }
};


int main() {
    Queue q;

    q.deQueue();


    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);


    q.enQueue(6);

    q.display();


    q.deQueue();


    q.display();

    return 0;
}
