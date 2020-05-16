#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int t,n,m;
    cin >> t >> n;
    queue<int>Qa;
    int x;
    rep(i,n){
        cin >> x;
        Qa.push(x);
    }

    cin >> m;
    queue<int>Qb;    
    rep(i,m){
        cin >> x;
        Qb.push(x);
    }

    if(n<m){
        cout << "no" << endl;
        return 0;
    }

        while(!Qa.empty()){
        if(Qa.front()+t<Qb.front())
            Qa.pop();
            else if(Qa.front()<=Qb.front() && Qb.front()<=Qa.front()+t){
                Qa.pop();
                Qb.pop();
            }
          	else{
              cout << "no" << endl;
              return 0;
            }
        }

        if(Qb.empty()){
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
}