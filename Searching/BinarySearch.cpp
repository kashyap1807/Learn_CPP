#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key){

    int start=0;
    int end=n;

    cout<<"The Index Of Element "<<key<<" is : ";
    while (start<=end)
    {
        int mid=(start+end)/2;

        if (key==arr[mid])
        {
            return mid;
        }
        
        else if (key >= arr[mid]){

            start=mid + 1;
        }

        else{
            end= mid-1;
        }
    }
    cout<<"\nYou Entered Wrong Element !";
    return -1;
}

int main(){

    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter The Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter The Search Element : ";
    cin>>key;

    cout<<BinarySearch(arr,n,key)<<endl;

    return 0;
}