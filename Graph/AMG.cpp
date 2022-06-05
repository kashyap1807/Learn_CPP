#include<iostream>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vii vector<int , int>
#define rep(i , a , b) for(int i = 0; i < b ; i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)

const int N = 1e+2 , Mode = 1e9+7

signed main(){

    int n , m;

    cout<<"Enter The Number Of Nodes : ";
    cin>>n;

    cout<<"Enter The Number OF Edges : ";
    cin>>m;

    vvi adjm(n+1 , vi(n+1, 0));

    cout<<"Enter The Edges : ";

    rep(i,0,m){

        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;

    }

    cout<<"Adjacenecy MAtrix is : "<<endl;

    rep(i ,1, n+1){
        rep(j,1,n+1)
        cout<<adjm[i][j]<<" ";
        cout<<endl;
    }


}