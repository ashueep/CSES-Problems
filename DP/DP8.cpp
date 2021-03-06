/*
Problem : https://cses.fi/problemset/task/1746 
*/
//Problem understood by outside editorial.
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

    int n,m,a[ARR+2];
    cin >> n >> m;
    gof cin >> a[i];

    ll dp[n+2][m+2];
    memset(dp,0,sizeof(dp));

    gof{
        for(int x = 1; x <= m ; x++){
            if(i == 0){
                if(a[i] == 0 || a[i] == x) dp[i][x] = 1;
                else dp[i][x] = 0;
                continue;
            }
            if(a[i] == 0 || a[i] == x){
                dp[i][x] = ((dp[i-1][x-1] + dp[i-1][x])%mod + dp[i-1][x+1])%mod;
            }
            else dp[i][x] = 0;
        }
    }
    ll ans = 0;
    for1(i,1,m+1) ans = (ans + dp[n-1][i])%mod;

    cout << ans << "\n";
    return;

}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


