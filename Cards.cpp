#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string arr;
    cin>>n>>arr;
    int j;
    for(int i = 0 ; i < n; i++){
       for(j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }

    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 'n')cout<<1<<" ";
        if(arr[i] == 'z')cout<<0<<" ";
    }
return 0;
}
