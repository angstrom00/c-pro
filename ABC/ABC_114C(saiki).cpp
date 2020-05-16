    #include <bits/stdc++.h>
    using namespace std;
    struct Fast { Fast() { cin.tie(0); ios::sync_with_stdio(false); cout << fixed << setprecision(20);} } fast;
     
    int ans, n;
     
    void dfs(long long a, int cnt3, int cnt5, int cnt7){
        if(a > n) return;
        if(cnt3 > 0 && cnt5 > 0 && cnt7 > 0){
            ans++;
        }
        dfs(10 * a + 3, cnt3 + 1, cnt5, cnt7);
        dfs(10 * a + 5, cnt3, cnt5 + 1, cnt7);
        dfs(10 * a + 7, cnt3, cnt5, cnt7 + 1);
    }
     
    int main(){
        cin >> n;
        dfs(0, 0, 0, 0);
        cout << ans << endl;
    }