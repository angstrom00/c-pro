#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    cin >> n;

    struct xy {int x,y;};
    struct xy a[n+10];

    rep(i,n){
        cin >> a[i].x >> a[i].y;
    }

    double sum=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            sum += sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x) + (a[i].y-a[j].y)*(a[i].y-a[j].y));
        }
    }

    int i=1,factn=1;
    while(i!=n+1){
        factn *= i;
        i++;
    }

    cout << setprecision(10) << sum/n << endl;
}