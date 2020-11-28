/*
Problem : https://cses.fi/problemset/task/1092
*/
#include<bits/stdc++.h>
using namespace std;

#define ll               long long int
#define gof              for(long long int i = 0 ; i < n ; i++)
#define for1(i,s,e)      for(long long int i = s ; i < e ; i++)
#define forr(i,e,s)      for(long long int i = e ; i >= s; i--)
#define gthru(i,n)       for(long long int i = 0 ; i < n ; ++i)
#define vi               vector<long long int>
#define all(x)           x.begin(), x.end()
#define pb(x)            push_back(x)
#define maxv(x)          *max_element(x)
#define minv(x)          *min_element(x)
#define mkvec(type,a,n)  vector<type> a(n)

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

void solve(){

    ll n;
    cin >> n;
    if((n*(n+1))%4 != 0){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vi v;
    gof v.pb(i+1);
    ll hp[ARR+2]; 
    memset(hp,false,n+1);
    
    int i = 0, j = n-1;
    ll sum = (n*(n+1))/4;
    while(i < j && sum){
        if(!hp[i]&&v[i] < sum){
            sum -= v[i];
            hp[i++] = true;
        }
        if(!hp[j]&&v[j]<sum){
            sum -= v[j];
            hp[j--] = true;
        }
    }

    gof{
        if(hp[i]) cout << v[i] << " ";
    }
    gof{
        if(!hp[i]) cout << v[i] << " ";
    }cout << "\n";

}

int main(){
	
    ll t = 1;
    while(t--) solve();
    return 0;
}


