/*
Problem : https://cses.fi/problemset/task/1745
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

    int n,a[100];
    bool hp[ARR+2];
    memset(hp,false,sizeof(hp));
    cin >> n;
    gof cin >> a[i];

    vector<ll> ans;
    ans.pb(a[0]);
    hp[a[0]] = true;
    for1(i,1,n){
       
        int size = ans.size();
        for(int j = 0 ; j < size; j++){
            if(!hp[ans[j]+a[i]]) {
                ans.pb(ans[j]+a[i]);
                hp[ans[j]+a[i]]=true;    
            }
        }if(!hp[a[i]]){
            ans.pb(a[i]);
            hp[a[i]]=true;
        }
    }

    sort(all(ans));
    cout << ans.size() << "\n";
    for(auto i : ans) cout << i << " ";
    cout << "\n";


}

int main(){
	//IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


