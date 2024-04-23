#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin, s);

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i = 0; i < s.size();){
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u'){
            s.erase(s.begin() + i);
        } else {
            i++; // Only increment i if no character is deleted
        }
    }

    for(auto x : s){
        cout << "." << x;
    }
    cout << endl;

    return 0;
}
