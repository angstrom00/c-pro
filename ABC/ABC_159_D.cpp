#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    cin >> n;

    int a[1000010],b[1000010];
    rep(i,1000000){
        a[i]=0;
        b[i]=0;
    }

    rep(i,n){
        cin >> a[i];
        b[a[i]]++;
    }

    int sum=0;
    rep(i,1000000){
        sum+=b[i]*(b[i]-1)/2;
    }
  
    rep(i,n){
        cout << sum-(b[a[i]]-1)*(b[a[i]]-2)/2 << endl;
    }


    // rep(i,n){
    //     if(a[i]==0||a[i]==1){
    //         cout << sum-a[i] << endl;
    //     }else{
    //         int k=pow(1+8*a[i],0.5);

    //         cout << sum-a[i]+(1-k)/2/k << endl;
    //     }
    // }


}