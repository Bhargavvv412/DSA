// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.



#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

Node* head = nullptr;

void addLL(int data){
    Node* newNode = new Node(data);

    //if head == null
    if(head==nullptr){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next; 
        }
        temp->next = newNode;
    }
}

void middelElements{

}

void print(){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    addLL(10);
    addLL(20);
    addLL(30);
    addLL(40);
    addLL(50);
    addLL(60);
    print();
    return 0;
}