/*
Problem : https://cses.fi/problemset/task/1638
*/
#include<bits/stdc++.h>
using namespace std;

#define ll 				long long int
#define gof 			for(long long int i = 0 ; i < n ; i++)
#define for1(i,s,e) 	for(long long int i = s ; i < e ; i++)
#define forr(i,e,s) 	for(long long int i = e ; i >= s; i--)
#define gthru(i,n)		for(long long int i = 0 ; i < n ; ++i)
#define vi 				vector<long long int>
#define all(x) 			x.begin(), x.end()
#define pb(x) 			push_back(x)
#define maxv(x) 		*max_element(x)
#define minv(x) 		*min_element(x)
#define mkvec(type,a,n) vector<type> a(n)

const ll ARR = 1e5;
const ll INF = 1e9;
const ll mod = 1e9+7;

void IO()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

void solve(){

    int n;
    cin >> n;

    string grid[1002];
    gof cin >> grid[i];

    if(grid[0][0] == '*'){
        cout << "0\n";
        return;
    }

    if(n == 1){
        cout << "1\n";
        return;
    }

    ll dp[1002][1002];

    gof{
        for1(j,0,n) dp[i][j]=0;
    }

    dp[0][0] = 1;
    for1(i,1,n){
        dp[i][0] = dp[i-1][0];
        if(grid[i][0] == '*') dp[i][0] = 0;
    }
    for1(i,1,n){
        dp[0][i] = dp[0][i-1];
        if(grid[0][i] == '*') dp[0][i] = 0;
    }

    dp[0][0] = 0;

    for1(i,1,n){
        for1(j,1,n){
            if(grid[i][j] == '.')
            dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
           // cout << dp[i][j] << " ";
        }

        //cout << "\n";
    }

    cout << dp[n-1][n-1] << "\n";

}

int main(){
//	IO();
    ll t = 1;
//    cin >> t;
    while(t--) solve();
    return 0;
}


