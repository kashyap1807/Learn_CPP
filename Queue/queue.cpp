#include<iostream>
using namespace std;

class Queue{

    public :
        int size;
        int *arr;
        int front;
        int back;

    Queue(){

        arr = new int[size];
        front = -1;
        back = -1;
    }

    void push(int element){

        if (size - back > 1)
        {
            back ++;
            arr[back] = element;
        }
        else{
            cout<<"Queue is Overflow";
        }

        if(front == -1){
            front ++;
        }

    }

    void pop(){

        if (front == -1 || front > back)
        {
            cout<<"Queue is Empty";
            return;
        }
        front ++;
    }

    int peek(){

        if(front == -1 || front > back){

            cout<<"Queue is Empty";
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front == -1 || front > back){

            cout<<"Queue is Empty";
        }
        else{
            cout<<"Queue is not empty";
        }
    }
};



int main(){

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.peek()<<endl;

    q.pop();

    cout<<q.peek()<<endl;

}