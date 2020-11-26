/*
Problem : https://cses.fi/problemset/task/1145 
*/
//O(n2) solution.

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

    ll a[ARR*2 +2];
    gof cin >> a[i];

    ll dp[ARR*2+2];

    dp[0] = 1;
    ll ans = 0;
    for(int i = 1 ; i < n ; i++){
        dp[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(a[i] > a[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(dp[i],ans);
    }
   // for(int i = 0 ; i < n ; i++) cout << dp[i] << " ";
    cout << *max_element(dp,dp+n) << "\n";

    return;

}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


