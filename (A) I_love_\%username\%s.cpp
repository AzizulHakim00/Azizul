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
          int a[n];
          for(int i = 0; i< n; i++){
            cin>>a[i];
          }
          int max = a[0];
          int min = a[0];
          int cnt = 0;
          for(int i = 1; i <n ; i++){
              if(a[i] > max){
                max = a[i];
                cnt++;

              }
            }
          for(int i = 1; i < n ;i++){
            if(a[i] < min){
              min = a[i];
              cnt++;

            }
          }
          cout<<cnt<<endl;
          

      }
    return 0;
}

  
