#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define vec vector<ll>
#define pb  push_back
#define pai pair<ll,ll>
// #define str string
#define all(a) (a).begin(),(a).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int preced(char ch) {
   if(ch == '+' || ch == '-') {
      return 1;
   }else if(ch == '*' || ch == '/') {
      return 2;
   }else if(ch == '^') {
      return 3;
   }else {
      return 0;
   }
}

void solve(){
    int n;
    string s;
    cin>>n>>s;
    stack <char> stak;
    string fin="";
    stak.push('#');
    rep(i,0,n){
        if(isalpha(s[i]))fin.pb(s[i]);
        else if(s[i]=='(')stak.push(s[i]);
        else if(s[i]==')'){
            while(stak.top() != '('){
                char ch = stak.top();
                stak.pop();
                fin.pb(ch);
            }
            stak.pop();
        }
        else{
            while(stak.top()!='#' && preced(s[i]) <= preced(stak.top())){
            char ch = stak.top();
            fin.pb(ch);
            stak.pop();
            }  
        stak.push(s[i]);
        }
    }
    while(stak.top()!='#'){
        fin.pb(stak.top());
        stak.pop();
    }
    rep(i,0,fin.length())cout<<fin[i];
    cout<<endl;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--)
    // cout<<t<<endl;`
    solve();
    return(0);    
}