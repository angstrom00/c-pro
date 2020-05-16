#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    string name;
    int t;
    queue<pair<string, int>> Q;
    
    int n,q;
    cin >> n >> q;

    rep(i,n){
        cin >> name >> t;
        Q.push(make_pair(name,t)); //name(string型)とt(int型)の構造体をmake_pairで定義
    }

    int tsum=0;
    pair<string, int> u;
    while(!Q.empty()){
        u=Q.front();
        if(u.second > q){
            Q.push(make_pair(u.first,u.second-q));
            Q.pop();
            tsum += q;
        }
        else
        {
            tsum += u.second;
            cout << u.first << " "<< tsum << endl;
            Q.pop();
        }
        
    }

    
}