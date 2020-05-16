#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int H,A[100000000];

void maxHeapify(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;

    if(H>=l && i<A[l]){
     largest = l;   
    }
    else largest = i;
    if(H>=r && i<A[r]){
        largest = r;
    }
    

    if(i != largest){
        swap(A[largest],A[i]);
        maxHeapify(largest);
    }
}


int main() 
{
    cin >> H;
    rep(i,H){
        cin >> A[i+1];
    }

    for(int i=H/2;i>=1;i--){
        maxHeapify(i);
    }

    rep(i,H){
        cout << " " << A[i+1];
    }

}