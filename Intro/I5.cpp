/*
Problem : https://cses.fi/problemset/task/1070 
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

    int n;
    cin >> n;
    if(n==1){
        cout << "1\n";
        return;
    }
    if(n==4){
        cout << "2 4 1 3\n";
        return;
    }
    if(n <= 3){
        cout << "NO SOLUTION\n";
        return;
    }
    int m = n%2 ? n/2+1 : n/2;
    for1(i,1,m+1){
        cout << 2*i-1 << " ";
    }
    for1(i,1,n/2+1){
        cout << 2*i << " ";
    }

    cout << "\n";

}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}


