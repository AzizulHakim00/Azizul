#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int sum=0, ans=0;
    for(int i = 0; i < n; i++){
        if(str[i] =='S' && str[i+1] == 'F'){
            sum++;
        }
        if(str[i] == 'F' && str[i+1] == 'S'){
            ans++;
        }
    }

    if(sum > ans) {
            cout<<"YES"<<endl;
    }
    else {
            cout<<"NO"<<endl;}

return 0;
}
