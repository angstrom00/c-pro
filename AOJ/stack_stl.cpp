#include <bits/stdc++.h>
#include <stack> 
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    stack<int> S;
    string s;
    int a, b;

    while(cin >> s){
        if(s == "+"){
            a = S.top();S.pop();
            b = S.top();S.pop();
            S.push(a+b);
        }
        else if(s == "-"){
            a = S.top();S.pop();
            b = S.top();S.pop();
            S.push(b-a);
        }
        else if(s == "*"){
            a = S.top();S.pop();
            b = S.top();S.pop();
            S.push(a*b);
        }
        else
        {
            S.push(atoi(s.c_str())); //c_str で s からcharのポインタを取り出す
        }

        
    }
    cout << S.top() << endl;

    
}