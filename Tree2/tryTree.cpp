#include<iostream>
#include<queue>
using namespace std;

class Node{

    public :
        int data;
        Node* left;
        Node* right;

        Node(int data){

            this -> data = data;
            this ->left = NULL;
            this ->right =NULL;
        }
};

Node* buildetree(Node* root){

    int data;
    cout<<"Enter The data : ";
    cin>>data;

    root = new Node(data);

    if( data == -1){
        return NULL;
    }

    cout<<"Enter The data for inserting in left of "<< data <<endl;
    root ->left = buildetree(root ->left);

    cout<<"Enter The data for inserting in right of "<< data <<endl;
    root ->right = buildetree(root ->right);

    return root;
}

void levelordertraversal(Node* root){

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        q.push(NULL);

        if (temp == NULL)
        {
            cout<<endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else
        {
            cout<< temp -> data <<" ";

            if (temp ->left)
            {
                q.push(temp ->left);
            }
            if (temp ->right)
            {
                q.push(temp -> right);
            }
            
        }
        
        
    }
    

}



int main(){

        cout<<"(Enter -1 of NULL)\n";
        Node* root = NULL;
        
        root = buildetree(root);

        cout<<"The output Levels Of Tree : ";
        levelordertraversal(root);
}