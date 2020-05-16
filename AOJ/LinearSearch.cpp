#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int LinearSearch(int A[], int n, int key){
    int i=0;
    A[n] = key;
    while(A[i] != key)i++;
    return i != n;
}

int main() 
{
    int n,q,sum=0;

    cin >> n;
    int S[n+10];
    rep(i,n){
        cin >> S[i];
    }

    cin >> q;
    int T[q+10];
    rep(i,q){
        cin >> T[i];
    }

    for(int i=0;i<q;i++){
        if(LinearSearch(S,n,T[i]))sum++;
    }

    cout << sum << endl;

}