#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node (int val){
        data = val;
        next = NULL;

    }
};

class queue {
    Node* front;
    Node* rear;

public:
    queue (){
        front = NULL;
        rear = NULL;
    }
    bool isEmpty() {
        return front == NULL;
    }

    void enqueue (int val){
    Node* newNode = new Node( val);
    if( isEmpty() ){
        front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
    cout<<val<<" enqueued ."<<endl;
}
int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

  void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        cout << front->data << " removed from queue." << endl;
        front = front->next;
        delete temp;
        if (front == nullptr) rear = nullptr; // queue empty
    }


void display(){
    if(front == NULL){
        cout<<"Queue is empty."<<endl;
        return;
    }
    Node* temp = front;
    cout<<"Queue : ";
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}
};
int main(){
    queue e;

    e.enqueue(10);
    e.enqueue(20);
    e.enqueue(40);
    e.enqueue(4);
    e.enqueue(34);
    cout << "Front element: " << e.peek() << endl;
    e.dequeue();
    e.dequeue();
    e.dequeue();
    e.dequeue();
    e.dequeue();
    e.enqueue(100);
    e.enqueue(200);
    e.enqueue(400);

    cout << "Front element: " << e.peek() << endl;
    cout << "Is queue empty? " << (e.isEmpty() ? "Yes" : "No") << endl;

    e.display();

    return 0;
}
