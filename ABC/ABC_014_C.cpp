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

    int x,y;
    int A[1000100];

    rep(i,n){
        cin >> x >> y;
        A[x]++;A[y+1]--;
    }
    for(int i=1; i<=1000000;i++){
        A[i] += A[i-1];
    }

    sort(A,A+1000001,greater<int>());
    cout << A[0] << endl;
}