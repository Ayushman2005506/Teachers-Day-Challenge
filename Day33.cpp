#include <iostream>
using namespace std;

int main(){
    string s1;
    string s2;

    cin>>s1>>s2;

    string result="";
    s1.length()==result.length();

    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            result.push_back('0');
        }
        else{
            result.push_back('1');
        }
    }
    cout<<result;

    return 0;

}
