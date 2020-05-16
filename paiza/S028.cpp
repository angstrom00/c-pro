#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    cin >> n;

    char s[n+10];
    cin >> s;

    int a[n+10];
    rep(i,n){
        a[i] = s[i]-'0';
    }

    int sum=0;
    rep(i,n){
        sum += a[i];
    }
    
    int dp[n][5];
    rep(i,n){
        rep(j,4){
            dp[i][j] = sum;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            if(j<3){
            }
        }
    }
}
