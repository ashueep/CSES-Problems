/*
Problem : https://cses.fi/problemset/task/1637 
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

const ll ARR = 1e6;
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

vector<ll> all_digit(ll x){
    vi ans;
    while(x){
        if(x%10) ans.pb(x%10);
        x/=10;
    }

    return ans;
}

void solve(){

    ll n;
    cin >> n;

    ll dp[ARR+2] ;

    for(int i = 0 ; i <= n ; i++){
        dp[i] = INF;
    }

    dp[0] = 0;

    for(int i = 1 ; i <= n ;i++){
        vector<ll> digits = all_digit(i);
        for(auto dig : digits){
            dp[i] = min(dp[i],dp[i-dig]+1);
        }
    }

    cout << dp[n] << "\n";

}

int main(){
	//IO();
    ll t = 1;
    //pcin >> t;
    while(t--) solve();
    return 0;
}


