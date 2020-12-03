/*
Problem : 
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

    string s;
    cin >> s;
    int n = s.length();

    int hp[27] = {0};

    gof{
        hp[(int)(s[i] - 'A')]++;
    }

    bool ok = true;
    char middle;
    for1(i,0,26){
        if(hp[i]){
            if(hp[i]%2){
                if(ok){
                    ok = false;
                    middle = char(i+'A');
                }
                else{
                    cout << "NO SOLUTION\n";
                    return;
                }
            }
        }
    }

    string ans = "";

    for1(i,0,26){
        if(!hp[i]) continue;
        if(hp[i]%2 == 0){
            cout << hp[i] << " ";
            for1(i,1,hp[i]/2 + 1){
                
                ans += char(i+'A');
            }
        }     
    }
    
    cout << ans;
    cout << middle;
    int m = ans.length();
    forr(i,m-1,0){
        cout << ans[i];
    }

    cout << "\n";

}

int main(){
//	IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


