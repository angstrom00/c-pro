#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
#define NIL -1


struct Node {int parent,left,right;};
struct Node T[100];
int D[100],H[100];

int getSibling(int u){
    if(T[u].parent == NIL)return -1;
    else if(T[T[u].parent].left != NIL && T[T[u].parent].left != u){
        return T[T[u].parent].left;
    }
    else if(T[T[u].parent].right != NIL && T[T[u].parent].right != u){
        return T[T[u].parent].right;
    }
    else return -1;
}

void setDepth(int u,int p){     //根の接点番号をuとする
    if(u == NIL) return;
    D[u] = p;
        setDepth(T[u].right,p+1);
        setDepth(T[u].left,p+1);
}

int getDegree(int u){
    int res=0;
    if(T[u].left != NIL)res++;
    if(T[u].right != NIL)res++;
    return res;
}

int setHeight(int H[],int u){
    int h1 = 0, h2 = 0;
    if(T[u].right != NIL)
        h1 = setHeight(H,T[u].right)+1;
    if(T[u].left != NIL)
        h2 = setHeight(H,T[u].left)+1;

    return H[u]=max(h1, h2);
}

int printType(int u){
    if(T[u].parent == NIL)cout <<"root";
    else if(getDegree(u))cout << "internal node";
    else cout << "leaf";
}



int main() 
{
    int n;
    cin >> n;
    //構造体配列の初期化
    rep(i,n){
        T[i].parent = T[i].left =T[i].right =NIL;
    }

    //親、子の設定
    rep(i,n){
        int id,l,r;
        cin >> id;
            cin >> l;
                T[id].left = l;
                T[l].parent =id;
            cin >> r;
                T[id].right = r;
                T[r].parent = id;
    }

    //根の接点番号の設定
    int r;
    rep(i,n){
        if(T[i].parent == NIL)r=i;
    }

    //各ノードの深さ
    setDepth(r,0);

    //各ノードの高さ
    rep(i,n){
        setHeight(H,i);
    }

    //出力
    rep(i,n){
        cout << "node " << i 
        << ": parent = "<< T[i].parent 
        <<", sibling = "<< getSibling(i)
        <<", degree = " << getDegree(i)
        << ", depth = " << D[i]
        <<", height = " << H[i] << ", ";
        printType(i);
        cout << endl;
    }

    

}