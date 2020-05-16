#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int xb,yb,xa,ya,t,v;
    cin >> xb >> yb >> xa >> ya >> t >> v;

    struct xy {int x,y;};
    int n;
    struct xy A[n+10];
    rep(i,n){
        cin >> A[i].x >> A[i].y;
    }

    bool can =false;
    double d1,d2;
    rep(i,n){
      d1 = sqrt((A[i].x-xb)*(A[i].x-xb)+(A[i].y-yb)*(A[i].y-yb));
      d2 = sqrt((A[i].x-xa)*(A[i].x-xa)+(A[i].y-ya)*(A[i].y-ya));
        if(t*v >= d1+d2){
            can=true;
            break;
        }
    }

    if(can){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}