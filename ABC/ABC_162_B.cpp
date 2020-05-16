#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    long long ans=0;

    REP(i,n){
        if(i%3!=0 || i%5!=0){
            ans+=i;
        }
    }

    cout << ans << endl;
}