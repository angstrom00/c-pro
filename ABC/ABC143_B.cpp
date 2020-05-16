#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int N,res=0;
    cin >> N;
    int d[N];
    rep(i,N){
        cin >> d[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            res += d[i]*d[j];
        }
    }

    cout << res;

}
