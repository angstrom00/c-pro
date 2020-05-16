#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,ng1,ng2,ng3;
    cin >> n >> ng1 >> ng2 >> ng3;

    bool can=true;
    if(n == ng1 || n == ng2 || n == ng3){
        can = false;
    }

    int i=0;
    while(1){
        if(n-3 == 0 || n-2 == 0 || n-1 == 0){
            i++;
            break;
        }

        else if(n-3 != ng1 && n-3 != ng2 && n-3 != ng3){
            n -= 3;
            i++;
        }
        else if(n-2 != ng1 && n-2 != ng2 && n-2 != ng3){
            n -= 2;
            i++;
        }
        else if(n-1 != ng1 && n-1 != ng2 && n-1 != ng3){
            n -= 1;
            i++;
        }
        else{
            can = false;
            break;
        }

    }
    if(can && i<=100){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}