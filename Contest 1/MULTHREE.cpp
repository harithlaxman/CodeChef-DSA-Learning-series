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

void solve(){
    ll k,x,y,n,sum=0;
    cin>>k>>x>>y;
    sum=x+y;
    ll temp=(sum%10);
    if(k==2){
        if(sum%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(k==3){
        sum= sum+temp;
        if(sum%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        k-=3;
        ll q=k/4 , r=k%4;
        
        ll tot = 0;
        ll t1=(temp*2)%10;
        rep(i,0,4)
        {
            tot+=t1;
            t1=(t1*2)%10;
        }
        
        sum+=((q*tot)+temp);
        temp=(temp*2)%10;
        rep(i,0,r){
            sum+=temp;
            temp=(temp*2)%10;
            }
        //cout<<sum<<'\n';
        if(sum%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return(0);    
}