#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int x;
    cin >> x;

    int y,ans;
    y=x/500;
    ans+=y*1000;
    x=x%500;
    y=x/5;
    ans+=y*5;

    cout << ans << endl;
}