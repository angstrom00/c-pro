#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    std::map<std::string, int> seqLen;
    int n;
    cin >> n;
    int maxs=0;
    string s;
     for(int i=0;i<n;i++){
         cin>>s;
         seqLen[s]++;
    }
    int mx=-1;
    for(auto p: seqLen) mx=max(mx,p.second);
    for(auto p: seqLen){
        if(p.second != mx)continue;
        cout << p.first << endl;
    }
}