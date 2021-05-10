#include <bits/stdc++.h>

using namespace std;

struct Node {
    int lol;
};

void Create() {
    ;
}

int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    int d;
    cin >> d;
    bool flag=true;
    for (int i=0; i<n; i++) {
        if (arr[i]==d) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Invalid Node! \n";
    }
    cout << "Linked List : ";
    for (int i=0; i<n; i++) {
        if (arr[i]==d)
            continue;
        cout << "->" << arr[i];
    }
    return 0;
}
