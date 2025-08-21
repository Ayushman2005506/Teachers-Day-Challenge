#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin>>n))
     {
        return 0;
    }
    vector<int> h(n);
    for (int i=0; i<n; ++i){
         cin>>h[i];
        }

    int best=1;
    for (int i=0;i<n;++i) {
        int count=1;

        for (int L= i-1; L>=0 && h[L] <= h[L+1];--L) {
            ++count;
        }
        for (int R = i+1; R<n && h[R] <= h[R-1]; ++R) {
            ++count;
        }

        if (count>best) best = count;
    }
    cout << best << '\n';
    return 0;
}
