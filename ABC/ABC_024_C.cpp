#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,d,k;
    cin >> n >> d >> k;
 
    int l[d+10],r[d+10];
    rep(i,d){
        cin >> l[i] >> r[i];
    }
    int s[k+10],t[k+10];
    rep(i,k){
        cin >> s[i] >> t[i];
    }
 
    bool can[k+10];
    rep(i,k+10){can[i]=false;}
 
    int ans[k+100];
    rep(i,d){
        rep(j,k){
            if((can[j]==0 && l[i] <= s[j]) && s[j] <= r[i]){
                if( l[i] <= t[j] && t[j] <= r[i]){
                    can[j]=true;
                    ans[j]=i+1;
                }else if(s[j] < t[j]){
                    s[j]=r[i];
                }else{
                    s[j]=l[i];
                }
            }
        }
    }
    rep(i,k){
        cout << ans[i] << endl;
    }
}

