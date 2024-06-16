#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, c;
        cin >> n >> c;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int> votes(n, 0);
        int max_votes = -1;
        for (int i = 0; i < n; ++i) {
            if (i != 0) {
                votes[i] += c;
            }
            for (int j = 0; j < n; ++j) {
                if (i != j) {
                    if (a[j] > a[i]) {
                        votes[j] += a[j];
                    } else {
                        votes[i] += a[j];
                    }
                }
            }
            max_votes = max(max_votes, votes[i]);
        }
        
        for (int i = 0; i < n; ++i) {
            if (votes[i] == max_votes) {
                cout << "0 ";
            } else {
                cout << max_votes - votes[i] + 1 << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
