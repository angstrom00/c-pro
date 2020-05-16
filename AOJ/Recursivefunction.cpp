#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int T[30],n;

int solve(int i,int m){
    if(m == 0)return 1;
    if(i == n)return 0;

    int res;
    res = solve(i+1,m) || solve(i+1,m-T[i]);
    return res;
    
}

int main() 
{
    cin >> n;
    rep(i,n){
        cin >> T[i];
    }

    int q,m;
    cin >> q;
    rep(i,q){
        cin >> m;
        if(solve(0,m))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}