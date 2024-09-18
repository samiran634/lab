#include <bits/stdc++.h>
using namespace std;

long long int formula(long long int n) {
    return n * (n - 1) / 2;
}

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> x(n), y(n);
        for (long long int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
        vector<long long int> ans;
        long long int fack_n = n;
        ans.push_back(formula(n));
        map<long long int, long long int> temp;
        temp[x[0]] = y[0];
        for (long long int i = 1; i < n; i++) {
            if (y[i] != 0 && temp.find(y[i]) == temp.end()) {
                fack_n--;
                temp[y[i]]++ ;
                ans.push_back(formula(fack_n));
            }
             if(y[i]!=0&&temp.find(y[i])!=temp.end()){
                ans.push_back(formula(fack_n));
            }
        }
     
  
        for (long long int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
