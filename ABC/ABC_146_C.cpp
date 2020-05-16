#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    long long a,b,x;
    cin >> a >> b >> x;

  	if(a+b<x){
          cout << 0 << endl;
          return 0;
      }
      
    long long n=1,d=1;
    while(a*n+b*d<x){
        n*=10;
        d++;
    }
  	d--;
    long long ans;
    ans = (x-b*d)/a;

    if(ans >1000000000){
        cout << 1000000000 << endl;
    }
    else{
    cout << ans << endl;
    }
}