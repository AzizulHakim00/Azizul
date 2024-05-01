#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
int a[mx];
vector<pair<ll, ll>>v;

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  ll t = 1;
  //cin >> t;
  while(t--){

          int n; 
          cin>>n;
          vector <pair<int,int>> v(n);
          for(int i = 0; i< n; i++){
            cin>>v[i].first>>v[i].second;
          }
          int a = 0,b =0;
          for(auto c : v){
            a += c.first;
            b+= c.second;
          //  cout<<c.first<<" "<<c.second<<endl;

          }
          int m,t;
          if( (n/2) < a){
           m = (n -a) ;
          } else m = a ;
          if(n/2 < b){
            t = n-b; 
          } else t = b; 
          cout<<m+t<<endl;

      }
    return 0;
}

  
