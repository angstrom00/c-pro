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

    if(s.at(2) == 'E'){
        cout << 5 << endl;
    }
    else if(s.at(2) == 'D'){
        cout << 4 << endl;
    }
    else if(s.at(2) == 'U')
    {
        cout << 3 << endl;
    }
    else if(s.at(2) == 'I'){
        cout << 2 << endl;
    }
    else if(s.at(2) == 'T'){
        cout << 1 << endl;
    }
    else if(s.at(0) == 'S'){
        cout << 7 << endl;
    }
    else{
        cout << 6 << endl;
    }
    
}