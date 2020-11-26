/*
Problem : https://cses.fi/problemset/task/1635 
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

    int n,x;
    cin >> n >> x;
    int c[100+3];
    gof cin >> c[i];

    ll dp[ARR*10+2];

    for1(i,0,x+3) dp[i] = 0;

    dp[0] = 1;

    for1(i,1,x+1){
        for1(j,0,n){
            if(i-c[j] >=0){
                dp[i] = (dp[i] + dp[i-c[j]])%mod;
            }
        }
    }

    cout << dp[x] <<  "\n";

    return;

}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


