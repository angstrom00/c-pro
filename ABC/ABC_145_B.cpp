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

    if(s.size()%2 == 1){
        cout << "No" << endl;
        return 0;
    }
        else{
            for(int i=0;i<s.size()/2;i++){
                if(s.at(i) != s.at(s.size()/2+i)){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    cout << "Yes" << endl;


}