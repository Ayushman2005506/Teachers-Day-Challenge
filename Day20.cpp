#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;

    string rev=s;

    for(int i=0;i<s.size();i++){

        rev[i]=s[s.length()-i-1];
    }

    if(rev==t){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    return 0;
  
}
