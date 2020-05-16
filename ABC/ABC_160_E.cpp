#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;
    int p[a+10],q[b+10],r[c+10];
    std::priority_queue<int> que;
    
    rep(i,a){
        cin >> p[i];
    }
    rep(i,b){
        cin >> q[i];
    }
    rep(i,c){
        int x;
        cin >> x;
        que.push(x);
    }
    
    sort(p,p+a);
    sort(q,q+b);

    for(int i=0;i<x;i++){
        que.push(p[a-1-i]);
    }
    for(int i=0;i<y;i++){
        que.push(q[b-1-i]);
    }

    long long ans=0;
    rep(i,x+y){
        ans+=que.top();
        que.pop();
    }

    cout << ans << endl;
    
}