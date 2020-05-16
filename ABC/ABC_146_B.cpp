#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    string s;
    cin >> s;
    char c;
    int a,b;
    rep(i,s.size()){
        a = 'A';
        b = s.at(i)+n;
        c = b%a;
        cout << c;
    }
    cout << endl;
}