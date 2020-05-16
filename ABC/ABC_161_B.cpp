#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,m;
    int a[n+10];

    cin >> n >> m;
    int sum=0;
    rep(i,n){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+n,std::greater<>());
    double x;
    x=sum/4.0/m;
    if(a[m-1]<x){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }


}