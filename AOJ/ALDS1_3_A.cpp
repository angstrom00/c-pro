#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int top,S[1000];

void push(int x){
    S[++top]=x;
}
int pop(){
    top--;
    return S[top+1];
}
int main() 
{
    int a,b;
    top = 0;
    char s[100];

    while(1){
    if(cin.eof())
     break;
     cin >> s;

    if(*s == '+'){
        a=pop();
        b=pop();
        push(a+b);
    }
    else if(*s == '-'){
        a=pop();
        b=pop();
        push(b-a);
    }
    else if(*s == '*'){
        a=pop();
        b=pop();
        push(b*a);
    }
    else
    {
        push(atoi(s));
    }
    }

    cout << pop() << endl;

}