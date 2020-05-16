#include <bits/stdc++.h>
#include <list>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    vector<char> v;
    vector<char>::iterator it;
    string s;
    int q;
    int t,f;
    char c;
    bool state_s=true;//trueのときそのまま、falseのとき反転
    bool state_f;

    cin >> s >> q;
    for(int i=0;i<s.length();i++){
        v.push_back(s.at(i));
    }
    
    rep(i,q){
        cin >> t;
        if(t==1) {
            state_s=!state_s;
        }else{
            cin >> f >> c;
            if(f==1)state_f=true;
            else state_f=false;
            if(state_s^state_f){
                v.push_back(c);
            }else{
                it=v.begin();
                it=v.insert(it,c);
            }
        }
    }

    if(state_s){
        for(it=v.begin();it!=v.end();it++){
            cout << *it;
        }
    }else{
        while(!v.empty()){
            cout << *(v.end()-1);
            v.pop_back();
        }
    }
}