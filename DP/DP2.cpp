/*
Problem : https://cses.fi/problemset/task/1634
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

const ll ARR = 1e2+2;
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

    ll n,x;
    int c[ARR];
    cin >> n >> x;
    gof cin >> c[i];

    ll dp[1000000+2];
    for1(i,0,x+3) dp[i] = INF;

    dp[0] = 0;

    for1(i,1,x+1){
        bool ok = false;
        for(int j = 0 ;  j < n ; j++){
            if(i-c[j] >= 0){
                if(dp[i-c[j]] != -1) dp[i] = min(dp[i],dp[i-c[j]]+1), ok = true;
            }
        }
        if(!ok) dp[i] = -1;
    }

    cout << dp[x] << "\n";
    return;

}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}



