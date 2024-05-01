#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isnext(int x ,int y){
  return ( x == 'B' && y == 'G' );
}

int main()
{
    optimize();
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--){
      int temp = 0; 
      for(int i = 0; i < n; i++){
        int x = i + temp;
        int y = i + temp + 1; 
        if(isnext(s[x],s[y])){
          swap(s[x] ,s[y]);
          temp++;
        }
      }
    }
    cout<<s;
  
    return 0;
}
