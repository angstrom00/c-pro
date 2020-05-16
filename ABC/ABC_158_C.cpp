#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int a,b;
    cin >> a >> b;

    rep(i,100000){
        if(i*0.08==a && i*0.1==b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}