#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n, k;
    cin >> n >> k;

    priority_queue<int> PQ;
    int x;
    rep(i,n){
        cin >> x;
        PQ.push(x);
    }

    stack<int> S;
    rep(i,k){
        S.push(PQ.top());
        PQ.pop();
    }
    
    double ans=0;
    rep(i,k){
        if(S.top()>ans){
            ans = (ans+S.top())/2;
        }
        S.pop();
    }
    cout << setprecision(10) << ans << endl;
}