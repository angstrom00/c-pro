#include <bits/stdc++.h>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    string com,key;
    map<string,bool>T;

    cin >> n;
    rep(i,n){
        cin >> com;
        if(com == "insert"){
            cin >> key;
            T[key] = true;
        }
        else if(com == "find"){
            cin >> key;
            if(T[key])cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
} 