/*
Problem : https://cses.fi/problemset/task/1071
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

    ll x,y;
    cin >> y >> x;
    if(x == y){
        cout << 1 + x*(x-1) << "\n";
        return;
    }

    if(x > y){
        if(x%2 == 0){
            ll s = (x-1)*(x-1) + 1;
            cout << s + y - 1 << "\n";
            return;
        }
        else{
            cout << x*x-y+1 << "\n";
            return;
        }
    }

    if(y%2==0){
        ll s = y*y;
        cout << s - x + 1 << "\n";
        return;
    }

    ll s = (y-1)*(y-1) + 1;

    cout << s + x - 1 << "\n";


}

int main(){
	IO();
    ll t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}


