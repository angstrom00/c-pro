#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int n,res=0;
    cin >> n;

    int l[n+10];
    rep(i,n){
        cin >> l[i];
    }

    sort(l,l+n);
    int *pos;
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            int v= l[i]-l[j]+1;
            pos = lower_bound(l,l+j,v);
            int idx = distance(l,pos);
            res += j-idx;
        }
    }

    cout << res << endl;
}