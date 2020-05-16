#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int n,res=1;
    cin >> n;

    string s;
    cin >> s;

    char c;
    c=s.at(0);

    for(int i=1; i<n;i++){
        if(s.at(i) != c)
        res++;
        c = s.at(i);
    }

    cout << res << endl;
}


