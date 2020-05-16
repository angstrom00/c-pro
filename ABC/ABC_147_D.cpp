#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const long long MOD = 1000000007;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    cin >> n;
    long long a[n+10];
    rep(i,n){
        cin >> a[i];
    }
    sort(a,a+n);
    int maxa=a[n-1],maxd=0;
    while(maxa){
        maxa/=2;
        maxd++;
    }


    int cnt0=0,cnt1=0;
    long long ans=0,d=1;



    rep(i,maxd){
        rep(j,n){
            if(a[j]&(1<<i))cnt0++;
            else cnt1++;
        }
        ans=(ans+cnt1*cnt0*d)%MOD;
        cnt1=0,cnt0=0;
        d*=2;
    }

    cout << ans%MOD << endl;
}