#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int n,k;
long long T[100000];
int check(int P){
    int i=0;
    for(int j=0;j<k;j++){
        long long s=0;
        while(s+T[i] <= P){
            s += T[i];
            i++;
            if(i == n)return n;
        }
    }
    return i;
}

int search(){
    long long l = 0;
    long long r = 1000000000;
    while(l+1 < r){
        long long mid=(l+r)/2;
        int v = check(mid);
        if(v >= n)r=mid;
        else l=mid;
    }
    return r;
}



int main() 
{
    cin >> n >> k;
    rep(i,n){
        cin >> T[i];
    }
    long long ans = search();
    cout << ans << endl;
}