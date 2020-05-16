#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    long long n;
    cin >> n;

    char c[6];
    char s[12]="12345612345";

    n= n%30;
    int q,r;
    q = n/5;
    r = n%5;

    rep(i,6){
        c[i] = s[i+q];
    }
    rep(i,r){
        swap(c[i],c[i+1]);
    }

    rep(i,6){
        cout << c[i];
    }
    cout << endl;
}