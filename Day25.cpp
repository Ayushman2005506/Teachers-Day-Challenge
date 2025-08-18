#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count1=0;
    int count2=0;

    for(char c:s){

        if(islower(c)){
            count1++;
        }

        else{
            count2++;
        }
    }

    string result;

    if (count1>=count2){
        for(char c:s){
            result+=tolower(c);

        }
    }

    else{
        for(char c:s){
            result+=toupper(c);
        }
    }

    cout<<result;

    return 0;

}
