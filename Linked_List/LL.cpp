#include<iostream>
using namespace std;


class Node{

    public :
        int data;
        Node* next;

        // constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail ,  int data){
    Node* temp = new Node(data);
    tail ->next = temp;
    tail = tail->next;
}

void insertAtposition(Node* &tail , Node* &head , int position , int data){

    //for first position
    if (position == 1)
    {
        insertAtHead(head , data);
        return;
    }
    
    Node* temp = head;
    int cnt=1;

    while(cnt < position - 1){

        temp = temp ->next;
        cnt++;
    }

    //for last position
    if (tail -> next == NULL)
    {
        insertAtTail(tail , data);
        return;
    }
    

    // j node no data nakhavano hoy a node
    Node* nodetoinsert = new Node(data);
    nodetoinsert -> next = temp ->next;
    temp ->next = nodetoinsert;
}

void deletenode(int position ,  Node* &head){

    if (position == 1)
    {
        Node* temp = head;
        head = head ->next;
    }
    else{

        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while (cnt <= position)
        {
            prev =curr;
            curr = curr ->next;
            cnt ++;
        }
        prev ->next = curr ->next;
    }
}

void print(Node* &head){

    Node* temp = head;

    while (temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp ->next; 
    }
    cout << endl;
}

int main(){

        // First Created Node
        Node* node1 = new Node(10);
        //cout << node1 -> data <<endl;
        //cout << node1 -> next <<endl;

        Node* head = node1;
        Node* tail = node1;
        print(head);

        insertAtTail(tail , 12);
    
        print(head);

        insertAtTail(tail , 15);
        
        print(head);

        insertAtposition(tail , head , 1 , 9);

        print(head);
        
        insertAtposition(tail , head , 4 , 17);
        
        print(head);

        deletenode(2 , head);

        print(head);
}        