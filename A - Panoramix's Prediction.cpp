#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isprime ( int x){
  if (x % 2 == 0 or x % 3 == 0 or x % 5 == 0 or x % 7 == 0 ){
    return 0;
  }
  else return 1;
}
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    int ans =0; 
    if( n == 2 and m == 3){
      cout<<"YES";
      return 0;
    }
    else if((n > 2 and n < 7 )and m-n == 2 ){
      cout<<"YES";
      return 0;
    }
    else{

      for(int i = 1; i <= n; i++){
        int x = n + i;
             if(isprime(x)){
              ans = x; 
              break;
           }
      
        }
    if( ans == m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
  }
    
