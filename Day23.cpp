#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int count=0;
    if(x==1 ||x==2||x==3||x==4||x==5){
        count=1;
    }

    else if(x%5==0){
        count=x/5;

    }
    else{

    count=(x/5)+1;
    }

    cout<<count;
}
