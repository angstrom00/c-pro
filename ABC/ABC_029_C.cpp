#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

void bfa(string s,int n){
    if(s.size()==n){
        cout << s << endl;
    }else{
        bfa(s+'a',n);
        bfa(s+'b',n);
        bfa(s+'c',n);
    }
}

int main() 
{
    int n;
    cin >> n;

    bfa("a",n);
    bfa("b",n);
    bfa("c",n);
}