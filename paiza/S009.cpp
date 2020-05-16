#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

 int n,m;


 void change(int A[][100],int B[][100],int j){
    rep(i,n){
        A[j][B[j][i]]=B[j][A[j][i]];
    }
 }

 int chikan(int i,int A[][100]){
     A[i][n]
     int res=chikan(i+1,change[])
 }


int main() 
{
    cin >> n;
    int S[n+10];
    rep(i,n){
        cin >> S[i];
    }

    cin >> m;
    int P[m+10][n+10];
    rep(i,m){
        rep(j,n){
            cin >> P[i][j];
        }
    }




}