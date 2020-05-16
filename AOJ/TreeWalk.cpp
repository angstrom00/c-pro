#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
#define NIL -1

struct Node {int parent, left, right;};
struct Node T[30];

int preorder(int u){
    cout << " " << u;
    if(T[u].left != NIL)preorder(T[u].left);
    if(T[u].right != NIL)preorder(T[u].right);
}

int inorder(int u){
    if(T[u].left != NIL)inorder(T[u].left);
    cout << " " << u;
    if(T[u].right != NIL)inorder(T[u].right);
}

int postorder(int u){
    if(T[u].left != NIL)postorder(T[u].left);
    if(T[u].right != NIL)postorder(T[u].right);
    cout << " " << u;
}


int main() 
{
    int n;
    cin >> n;

    rep(i,n){
        T[i].parent = T[i].left = T[i].right = NIL;
    }

    rep(i,n){
        int id,l,r;
        cin >> id;
        cin >> l;
            T[id].left = l;
            T[l].parent = id;
        cin >> r;
            T[id].right = r;
            T[r].parent = id;
    }

    int r;
    rep(i,n){
        if(T[i].parent == NIL)r=i;
    }

    cout << "Preorder" << endl;
    preorder(r);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(r);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(r);
    cout << endl;
}