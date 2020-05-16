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

    int A[n][n]={};
    int p,k;
    rep(i,n){
        cin >> p >> k;
        int q;
            rep(j,k){
                cin >> q;
                A[p][q] = 1;
            }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j-1){
                cout << " ";
            }
            cout << A[i][j];
        }
        cout << endl;
    }
}