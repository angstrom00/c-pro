#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int n,cf,cb,sum=0;
string a;
bool can;
queue <char> q;

int dfs(int k,bool b[],string a,int sum, queue<char> q){
    can=true;
    b[k]==true;

    rep(i,n){
        can=b[i]&&can;
    }
    if(can&&k==n-1){
        return sum;
    }
    
    for(int i=0;i<n;i++){
        if(a.at(i)=='s'&&i!=k){
            for(int j=i+1;j<n;j++){
                if(a.at(j)=='s'){
                    a.at(j)='d';
                }else{
                    a.at(j)='s';
                }
            }
            if(i<k){
                sum+=cb;
            }else{
                sum+=cf;
            }
                dfs(i,b,a,sum,q);
        }
    }
}

int main() 
{
    bool seen[100];
    for(int i=0;i<100;i++){
        seen[i]=false;
    }
    cin >> n >> cf >> cb >> a;

    dfs()

}