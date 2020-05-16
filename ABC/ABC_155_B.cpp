#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int N;
    int x;

    cin >> N;

    rep(i,N){
        cin >> x;
        if(x%2==0){
            if(x%3!=0 && x%5!=0){
                cout << "DENIED" <<endl;
                return 0;
            }
        }
    }

    cout << "APPROVED" << endl;
}