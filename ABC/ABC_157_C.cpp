#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,m;
    cin >> n >> m;

    int a[10];
    rep(i,10){
        a[i]=100;
    }

    int s,c;
    rep(i,m){
        cin >> s >> c;s--;
        if(s==0 && c==0 && n!=1){
            cout << -1 << endl;
            return 0;
        }else{
            if(a[s]!=100 && a[s]!=c){
                cout << -1 << endl;
                return 0;
            }
            a[s]=c;
        }
    }

    int ans=0,d=1;
    for(int i=n-1;i>=0;i--){
        if(a[i]!=100){
            ans+=a[i]*d;
        }
        if(a[i]==100 && i==0){
            ans+=d;
        }
        d*=10;
    }

    cout << ans << endl;
}