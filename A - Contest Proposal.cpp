#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> vi(n);
        vector<int> vj(n);
        
        for (int i = 0; i < n; i++) {
            cin >> vi[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> vj[i];
        }
 
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (vi[i] > vj[i]) {
                // We need to insert vj[i] into vi to make it non-decreasing
                // Find the position where vj[i] should be inserted
                int j;
                for (j = 0; j < n; j++) {
                    if (vi[j] >= vj[i]) {
                        break;
                    }
                }
                // Insert vj[i] at position j
                vi.insert(vi.begin() + j, vj[i]);
                temp++;
            }
        }
        cout << temp << endl;
    }
    return 0;
}
