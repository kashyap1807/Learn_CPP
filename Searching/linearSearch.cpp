#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){

    cout<<"The Index of Element "<<key<<" is : ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    cout<<"\nYour Entered Element is Wrong ! ";
    return -1;
}

int main(){

    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter THe Elements Of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Search The Element : ";
    cin>>key;

    cout<<LinearSearch(arr,n,key)<<endl;
}