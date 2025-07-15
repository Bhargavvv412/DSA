#include <bits/stdc++.h>
using namespace std;

//By making class
class Node{
    public:
        int data;
        Node* next;

    //made node
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

Node* head = nullptr;

void insertatend(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) { // FIXED: stop at last node
            temp = temp->next;
        }
        temp->next = newNode; // Now temp is last node
    }
}

void print(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
    insertatend(10);
    insertatend(20);
    insertatend(30);
    insertatend(40);
    print();
}