#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int a,b;
    cin >> a >> b;

    if(a>9 || b>9)
        cout << -1 << endl;
        else
        cout << a*b <<endl;
}