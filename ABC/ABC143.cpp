#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int A,B;
    cin >> A >> B;

    if(A < 2*B){
        cout << 0 << endl;
    }
    else
    {
        cout << A-2*B << endl;
    }
    
}