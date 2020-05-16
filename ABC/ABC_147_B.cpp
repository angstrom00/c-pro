#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    string s;
    int ans=0;

    for(int i=0; i<s.size()/2; i++){
        if(s.at(i) != s.at(s.size()-1-i)){
            ans++;
        }
    }

    cout << ans << endl;
}