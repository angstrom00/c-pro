#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
#define NIL -1

struct Node {int parent, left, right;};
struct Node T[200000];
int D[200000];

int setDepth(int u,int p){      //根の接点番号をuとする
    D[u] = p;
    if(T[u].right != NIL)
        setDepth(T[u].right,p);
    if(T[u].left != NIL)
        setDepth(T[u].left,p+1);
}

int printChildren(int u){
    int c;
    c = T[u].left;
    cout << "[";
    while(c != NIL){
        cout << c ;
        if(T[c].right != NIL)
        cout << ", ";
        c = T[c].right;
    }
    cout << "]";
}

int printType(int u){
    if(T[u].parent == NIL)cout <<"root";
    else if(T[u].left == NIL)cout << "leaf";
    else cout << "internal node";
}

int main() 
{
    //構造体配列Tの初期化
    rep(i,200000){
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }

    //親、左子、右兄弟の設定
    int n;
    cin >> n;
    rep(i,n){
        int id,k,cl=NIL;
        cin >> id >> k;
        rep(j,k){
            int c;
            cin >> c;
            if(cl != NIL)T[cl].right = c;
            cl = c;
            T[c].parent = id;
            if(j == 0)T[id].left = c;
        }
    }

    //根の接点番号を設定
    int r;
    rep(i,n){
        if(T[i].parent==NIL)i=r;
    }

    //各ノードのDepthを設定
    setDepth(r,0);

    //出力
    rep(i,n){
        cout << "node " << i << ": parent = "<< T[i].parent << ", depth = " << D[i] <<", ";
        printType(i);
        cout << ", ";
        printChildren(i);
        cout << endl;
    }
}