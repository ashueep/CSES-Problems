/*
Problem : https://cses.fi/problemset/task/1754
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

    int aa,bb;
    cin >> aa >> bb;
    int a = min(aa,bb);
    int b = max(aa,bb);

    if(b-a > a){
        cout << "NO\n";
        return;
    }

    int diff = b - a;

    if(diff == a){
        cout << "YES\n";
        return;
    }

    if(diff == 0){
        if(a%3){
            cout << "NO\n";
            return;
        }
    }

    if((diff >= 0 && (a-diff)%3 == 0)){
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
    return;

}

int main(){
//	IO();
    ll t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}


