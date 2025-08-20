#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    double count=0;

    for(int i=0;i<n;i++){
        cin>>p;
        count+=p;
    }
    double result=count/n;
    cout<<result;

    return 0;
}
