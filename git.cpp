#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    int nmin = INT_MAX; // Initialize to maximum possible value
    int xmin; // Index of the smallest element
    int minmin = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] <= nmin) {
            nmin = v[i];
            minmin = min(minmin,nmin);
            xmin = i;
        }
    }

    

    int nmax = *max_element(v.begin(), v.end()); // Maximum element in the array
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] < nmax) {
            count++;
        }
        else if(v[i] == nmax) {
            break; // Stop counting when the value equals the maximum
        }
    }

   if(xmin > count){
    cout<<count+(n-xmin)-1;
   }else cout<<count+(n-xmin)-2;

    return 0;
}
