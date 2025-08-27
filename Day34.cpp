#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int p[101];
    int ans[101]; 

    for (int i=1;i<=n;i++) {
        cin>>p[i];
    }

    for (int i=1;i<=n;i++) {
        ans[p[i]]=i;
    }

    for (int j=1;j<n;j++) {
        if (j>1)cout<< ' ';
        cout<<ans[j];
    }
    cout<<'\n';
    return 0;
}
