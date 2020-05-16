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
    long long A[n+10];

    A[1]=0;A[2]=0;A[3]=1;

    for(int i=4;i<=n;i++){
        A[i]=(A[i-1]+A[i-2]+A[i-3])%10007;
    }

    cout << A[n] << endl;
}