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
    int n=s.size();
    int m=n/2;
    for(int i=0;i<m;i++){
        if(s.at(i)!=s.at(n-1-i)||s.at(i)!=s.at(m-1-i)||s.at(i)!=s.at(m+1+i)){
            cout << "No" << endl;
            break;
        }
    }
    cout << "Yes" <<endl;
}