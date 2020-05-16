#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int n,maxv=-2000000;
    cin >> n;

    int A[n+100];
    rep(i,n){
        cin >> A[i];
    }
    int minv = A[0];

    for(int i=1; i<n; i++){
        maxv=max(maxv,A[i]-minv);
        minv=min(minv,A[i]);
        }
 

    cout << maxv << endl;

 	return 0;
}