#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int k,n;
    cin >> k >> n;

    int a[n+10];
    rep(i,n){
        cin >> a[i];
    }

    int ans=10000000;
    for(int i=0;i<n-1;i++){
        ans=min(ans,k-(a[i+1]-a[i]));
    }
    cout << ans << endl;
}