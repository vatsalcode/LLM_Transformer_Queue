#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while(tc--) {
        string jewels, stones;
        getline(cin, jewels);
        getline(cin, stones);
        unordered_map <char, int> m;
        int count = 0;
        for(int i=0; i<jewels.size(); i++) {
            m[jewels[i]]++;
        }
        for(int i=0; i<stones.size(); i++) {
            if(m.find(stones[i]) != m.end()) {
                count++;
            }
        }
        cout << count << endl;
    }
}
