/*
Problem : https://cses.fi/problemset/task/1636
*/

//Failed 7/13 cases. (Without 2D array)
//Failed 6/13 cases. (With 2D array, all RE)
//Passed by switching for loops. Should fill horizontally first (Top to Down)
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
    int c[102];
    gof cin >> c[i];
 
    ll dp[ARR*10+2];
 
    dp[0] = 1;
 
    for1(j,0,n){
        for1(i,1,x+1){
            if(j == 0){
                dp[i] = (i%c[j] == 0);
                continue;
            }
            if(i-c[j] >= 0)
            dp[i] = (dp[i] + dp[i-c[j]])%mod;
        }
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
 
 