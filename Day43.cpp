#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();

    bool is_upper=true;
    bool first_lower_rest_upper=false;

    for(char c:s){
        if(!isupper(c)){
            is_upper=false;
            break;
        }
    }

    if(islower(s[0])){
        first_lower_rest_upper=true;
        for(int i=1;i<n;i++){
            if(!isupper(s[i])){
                first_lower_rest_upper=false;
                break;
            }
        }
    }

    if(is_upper || first_lower_rest_upper){
        for(char& c:s){
            if(islower(c)){
                c=toupper(c);
            }
            else{
                c=tolower(c);
            }
        }
    }

    cout<<s;
}
