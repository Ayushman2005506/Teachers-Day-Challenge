#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long function;

        if(n%2==0){
            function=n/2;
        }
        else{
            function=-((n+1)/2);
        }
    

    cout<<function;
    return 0;
}
