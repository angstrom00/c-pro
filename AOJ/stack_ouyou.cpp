#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    stack<int> S1;
    stack<pair<int,int>>S2;
    char c;
    int i=0,j,sum=0,sub=0;

    while(1){
        cin >> c;
        if(cin.eof())
            break;
        
        if(c == '\\'){
            S1.push(i);
        }
        else if(c == '/' && !S1.empty()){
            j   = S1.top();S1.pop();
            sum += i-j;
            sub = i-j; 
            while(!S2.empty() && S2.top().first>j){
                sub += S2.top().second;
                S2.pop();
            } 
            S2.push(make_pair(j,sub));
        }
        i++;  
    }

    stack<int>ans;
    while(!S2.empty()){
        ans.push(S2.top().second);
        S2.pop();
    }
    cout << sum <<endl;
    cout << ans.size();
    while(!ans.empty()){
        cout << " ";
        cout << ans.top();
        ans.pop();
    }
    cout << endl;
}