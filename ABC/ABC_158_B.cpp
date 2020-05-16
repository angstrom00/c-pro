#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    long long n,a,b;
    cin >> n >> a >> b;
    
    if(n%(a+b)>a){
        cout << n/(a+b)*a+a;
    }else{
        cout << n/(a+b)*a+n%(a+b);
    }

}