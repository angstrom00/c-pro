#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    string s,t;
    cin >> s >> t;

    map<char, int> A;
    A['@'] = 10;
    A['a'] = 1;
    A['t'] = 1;
    A['c'] = 1;
    A['o'] = 1;
    A['d'] = 1;
    A['e'] = 1;
    A['r'] = 1;


    for(int i=0; i<s.size();i++){
        if(s.at(i) == t.at(i))
            continue;
            else if(A[s.at(i)]+A[t.at(i)] < 11)
                cout << "You will lose" << endl;
    }

    cout << "You can win" << endl;
}
