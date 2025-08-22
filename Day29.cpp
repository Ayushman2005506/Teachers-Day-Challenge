#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    n=s.length();

    int anton=0;
    int danik=0;

    for(char c:s){
        if(c=='A'){
            anton++;
        }
        else if(c=='D'){
            danik++;
        }
    }
    if(anton>danik){
        cout<<"Anton";
    }
    else if(anton<danik){
        cout<<"Danik";
    }
    else if(anton=danik){
        cout<<"Friendship";
    }
    return 0;
}
