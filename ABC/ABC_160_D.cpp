#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,x,y;
    cin >> n >> x >> y;

    int ans[n+10];
    rep(i,n+10){
        ans[i]=0;
    }

    for(int i=1;i<n;i++){
        for(int j=i+1;i<=n;i++){
            ans[min(min(j-i,abs(j-x)+1+abs(i-y)),abs(i-x)+1+abs(j-y))]++;
        }
    }

    for(int i=1;i<n;i++){
        cout << ans[i] << endl;
    }


}