/*
Problem : https://cses.fi/problemset/task/1097 
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

ll dp[5003][5003];
int n,a[5003];
int who[5003][5003];

ll ways(int i, int j, bool turn){
    if(j == i){
        if(turn){
            dp[i][j] == a[i];
            who[i][j] = 1;
        }
        else who[i][j] = 2;
    }
    if(j < i) return 0;
    if(who[i][j] != -1){
        if(who[i][j] == 1) return dp[i][j];
        return 0;
    }
    if(turn){
        dp[i][j] = max(ways(i+1,j,!turn)+a[i],ways(i,j-1,!turn)+a[j]);
        return dp[i][j];
    }
    
}

void solve(){

    cin >> n;
    gof cin >> a[i];
    memset(dp,0,sizeof(dp));
    memset(who,-1,sizeof(who));
}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


