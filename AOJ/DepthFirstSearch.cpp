#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
#define NIL -1

stack<int>S;
int A[1000][1000]={};
string color[1000]={"WHITE"};
int d[1000]={},f[1000]={},nt[1000];
int n,tt=0;

int next(int u){
    for(int v=nt[u];v<=n;v++){
        nt[u] = v+1;
        if(A[u][v]){
            return v;
        }
    }
    return NIL;
}


void dfs(int u){
    S.push(u);
    color[u]="GRAY";
    d[u] = ++tt;

    int v;
    while(!S.empty()){
        u=S.top();
        v=next(u);
        if(v != NIL){
            if(color[v] == "WHITE"){
                color[v] = "GRAY";
                S.push(v);
                d[v] = ++tt;
            }
        }
        else{
            color[u] = "BLACK";
            S.pop();
            f[u] = ++tt;
        }
        
    }

}

    void dfs_init(){
        REP(i,n){
            color[i]="WHITE";
            nt[i]=0;
        }
    }

int main() 
{
    cin >> n;

    int p,k;
    rep(i,n){
        cin >> p >> k;
        int q;
            rep(j,k){
                cin >> q;
                A[p][q] = 1;
            }
    }

    dfs_init();
    for(int i=1;i<=n;i++){
        if(color[i] == "WHITE")dfs(i);
    }

    REP(i,n){
        cout << i <<" " << d[i] << " " << f[i] << endl;
    }

}