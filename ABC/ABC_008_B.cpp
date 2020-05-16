#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    cin >> n;

    map<string, int>M;
    string s;
    int maxs=-1;
    string ans;
    rep(i,n){
        cin >> s;
        M[s]++;
        maxs=max(maxs,M[s]);
        if(maxs==M[s]){
            ans = s;
        }
    }

    cout << s << endl;
}
