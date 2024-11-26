#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int len;
        cin >> len;
        string s;
        cin >> s;
        int index1 = -1, index2 = -1;
        for(int i = 0; i < len; i++) {
            if(s[i] == 'B') {
                index1 = i;
                break;
            }
        }
        for(int i = len - 1; i >= 0; i--) {
            if(s[i] == 'B') {
                index2 = i;
                break;
            }
        }
        if(index1 == -1 || index2 == -1) {
            cout <<"0"<<endl;
        } else {
            int l = index2 - index1 + 1;
            cout << l;
            cout<<endl;
        }
    }

    return 0;
}
