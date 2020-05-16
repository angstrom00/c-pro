#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    string s;
    cin >> s;

    if(s.at(2)==s.at(3) && s.at(4)==s.at(5)){
        cout << "Yes" << endl;
    }else{
        cout << "No" <<endl;
    }
}