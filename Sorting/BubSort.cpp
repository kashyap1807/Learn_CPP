#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter The size of arry : ";
    cin>>n;

    int A[n];
    cout<<"Enter The Elements Of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    int counter=1;
    while(counter < n){
        for (int i = 0; i < n - counter; i++)
        {
            if (A[i] > A[i+1])
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
            

        }
        counter++;
    }
    cout<<"Sorted Array is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<A[i]<<" ";
        }cout<<endl;

    
}