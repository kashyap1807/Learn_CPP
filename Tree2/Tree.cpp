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
            this -> left = NULL;
            this -> right = NULL;
            
        }
};

Node* buildtree(Node* root){

    
    int data;
    cout<<"Enter The Data : ";
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter Data For inserting in left of "<< data<< endl;
    root -> left = buildtree(root ->left);

    cout<<"Enter Data For inserting in Right of "<< data <<endl;
    root -> right = buildtree(root -> right);

    return root;
}

void levelordertraversal(Node* root){

    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }

        else{
            cout<< temp -> data <<" ";
            
            if(temp ->left){
                q.push(temp -> left);
            }
            if (temp ->right)
            {
                q.push(temp ->right);
            }
        }
        
        
    }
    
}

void preorderTraversal(Node* root){

    if (root == NULL)
     return;

    cout<< root->data <<" ";

    preorderTraversal(root->left);

    preorderTraversal(root->right);


}

void inorderTraversal(Node* root){

    if(root == NULL)
        return;

    inorderTraversal(root ->left);

    cout<< root -> data << " ";

    inorderTraversal(root ->right);
}

void postorderTraversal(Node* root){

    if (root == NULL)
        return;
    
    postorderTraversal(root ->left);

    postorderTraversal(root ->right);

    cout<< root->data<<" ";
    
}



int main(){

        Node* root = NULL;

        //inputs for tree
        cout<<"(* For NULL , Enter -1 )"<<endl;
        root = buildtree(root);
        // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1

        // level order traversal
        cout<<"\nPrintig the Levels(ouput) Of Tree : "<<endl;
        levelordertraversal(root);

        //pre in post order Traversals

        cout<<"\nPreOreder Traversal is : ";
        preorderTraversal(root);

        cout<<"\nInOreder Traversal is : ";
        inorderTraversal(root);

        cout<<"\nPostOreder Traversal is : ";
        postorderTraversal(root);

        return 0;

}