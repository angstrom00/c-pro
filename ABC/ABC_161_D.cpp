#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

queue<long long> q;

long long lunlunnum(int k){
    REP(i,9){
        q.push(i);
    }
    for(int i=0;i<k-1;i++){
        long long x=q.front();
        long long r=x%10;
        if(r!=0){
         q.push(10*x+r-1);
        }
        q.push(10*x+r);
        if(r!=9){
         q.push(x*10+r+1);
        }   
        q.pop();
    }
    return q.front();
}


int main() 
{
    int k;
    cin >> k;

    cout << lunlunnum(k) << endl;

}