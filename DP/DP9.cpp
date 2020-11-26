/*
Problem : https://cses.fi/problemset/task/1639
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

    string s,t;
    cin >> s; cin >> t;

    int n = s.length(), m = t.length();

    ll dp[m+2][n+2];

    for(int i = 0 ; i < n+2 ; i++){
        dp[0][i] = i;
    }    
    for1(i,0,m+2) dp[i][0] = i;

    dp[0][0] = 0;

    for1(i,1,n+1){
        for1(j,1,m+1){
            if(s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;
            }
        }
        //cout << "\n";
    }

    cout << dp[m-1][n-1] << "\n";


}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


