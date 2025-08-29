#include <iostream>
using namespace std;

int main(){
    int n,m,p;
    cin>>n>>m;
    p=n+1;
    
    while(true){
    int count=0;
    for(int i=2;i<p;i++){
        if(p%i==0){
            count++;
        }
    }
        if (count==0){
            break;
        }
        else{
            p++;
        }

    }
    if(p==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
