#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

struct Node{
    int key;
    Node *parent,*left,*right;
};
Node *root,*NIL;

void insert(int k){
    Node *x = root;
    Node *y = NIL;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x != NIL){
        y=x;
        if(z->key < x->key){
            x = x->left;
        }
        else
        {
            x=x->right;
        }
    }
    z->parent = y;
    if(y == NIL){
        root = z;
    }
    else if(z->key < y->key){
        y->left = z;
    }
    else 
        y->right = z;
}

void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}

void preorder(Node *u){
    if(u == NIL)return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

Node *find(Node *u,int k){
    while(u != NIL && u->key != k){
        if(k < u->key){
            u=u->left;
        } 
        else
        {
            u=u->right;
        }
    }
    return u;
}

Node *getminimum(Node *u){
    while(u->left != NIL){
        u=u->left;
    }
    return u;
}

Node *nextnodepoint(Node *u){
    if(u->right != NIL){
        return getminimum(u->right);
    }
    else{
        Node *y;
        y = u->parent;
        while(y != NIL && u==y->right){
            u=y;
            y=y->parent;
        }
        return y;
    }
}

void Delete(int k){
    Node *u,*x,*y;
    u=find(root,k);

        if(u->left == NIL && u->right == NIL){
            y=u;
            x=y->right;
        }
        
        else if(u->left != NIL && u->right != NIL){
            y=nextnodepoint(u);
            x=y->right;
        }
        else{
            y=u;
            if(u->left == NIL)
                x=u->right;
            else
                x=u->left;
        }
        if(x != NIL){
            x->parent = y->parent;
        }


        if(y == root){
            root=x;
        }
        else if(y->key < y->parent->key)
            y->parent->left = x;
        else
            y->parent->right = x;

        if(y != u)
            u->key = y->key;

        free(y);


}
int main() 
{
    int n,x;
    string com;
    cin >> n;
    rep(i,n){
        cin >> com;
        if(com == "insert"){
            cin >> x;
            insert(x);
        }
        else if(com=="delete"){
            cin >> x;
            Delete(x);
        }
        else if(com == "find"){
            cin >> x;
            if(find(root,x)!=NIL)
                cout << "yes" << endl;
                else
                    cout << "no" << endl;
        }
        else if(com == "print"){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

}