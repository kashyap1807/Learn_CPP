#include<iostream>
using namespace std;

class stack{

    public:
        int *arr;//dynamic array !
        int size;
        int top;

    stack(int size){
        this -> size= size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        
        if (size - top > 1) // size - top > 1
        {
            
            top++;
            arr[top] = element;
                        
        }
        else{
            cout<<"Stack is Overflow";
        }
        

    }


    void pop(){

        if (top >= 0) // top >= 0
        {
            top--;
        }
        else{
            cout<<"stack is Underflow0";
        }

    }

    int peek(){
        
        if (top >= 0) // top >= 0 
        {
            return arr[top];
        }
        else{
            cout<<"Stack is Empty";
            return -1;
        }
        
    }

    void empty(){
        if (top == -1) //top == -1
        {
            cout<<"Stack is Empty";
        }
        else{
            cout<<"Stack is not Empty";
        }
        
    }

};


int main(){
        stack st(5);
        st.push(1);
        st.push(2);
        st.push(3);
        
        cout << st.peek() <<endl;
}