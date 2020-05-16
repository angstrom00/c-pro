#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int binarysearch(int A[], int n, int key){
        int l = 0;
        int r = n;
        while(l < r){
            int mid=(l+r)/2;
            if(key == A[mid])
                return 1;
            else if(key > A[mid]){
                l = mid+1;
            }
            else if(key < A[mid]){
                r = mid;
            }
        }
        return 0;
    }

int main() 
{
    int sum=0;
    int n;
    cin >> n;
    int S[n];
    rep(i,n){
        cin >> S[i];
    }

    int q,key;
    cin >> q;
    rep(i,q){
        cin >> key;
        if(binarysearch(S,n,key))sum++;
    }

    cout << sum << endl;
}
