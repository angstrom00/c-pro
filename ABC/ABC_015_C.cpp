#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int a[10][10];
int n,k,x=0;
bool bug=false;

bool BugCheck(int i,int value){
    if(i==n)return(value==0);
    rep(j,k){
        if(BugCheck(i+1,value^a[i][j]))return true;
    }
    return false;
}


int main() 
{
    cin >> n >> k;
    rep(i,n){
        rep(j,k){
            cin >> a[i][j];
        }
    }

    
    if(BugCheck(0,0)){
        cout << "Found" << endl;
    }else{
        cout << "Nothing" << endl;
    }
    

}