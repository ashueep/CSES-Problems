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

    if((n*(n+1))%4!=0){
        cout << "NO\n";
        return;
    }

    if(n==3){
        printf("YES\n1\n3\n2\n2 1\n");
        return;
    }

    vi s1,s2;

    for1(i,1,n) s1.pb(i);
    s2.pb(n);
    ll ss2 = n;
    ll ss1 = (n*(n-1))/2;
    for(int i = n-1; i >= 0 ; i--){
        ll d = (ss1 - ss2)/2;
        if(d <= *(s1.end()-1)){
            s1[d-1] = -1;
            s2.pb(d);
            break;
        }
        ll e = *(s1.end()-1);
        s1.pop_back();
        ss2+=e;
        ss1-=e;
        s2.pb(e);
    }
    cout << "YES\n";
    cout << s1.size() - 1 << "\n";
    for(auto i : s1) if(i!=-1) cout << i << " ";
    cout << "\n" <<s2.size() << "\n";
    for(auto i : s2) cout << i << " ";

}

int main(){
	
    ll t = 1;
    while(t--) solve();
    return 0;
}


