#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=1;i<=1000;i++){
       int x=i; 
       while(x>0){
       int d=x%10;
       if(d!=4 && d!=7){
        break;
       }
       x=x/10;
    }
    if(x==0){
        arr.push_back(i);}
 }
 for(int c:arr){
    if (n%c==0){
        cout<<"YES";
        return 0;
    }
    else{
        continue;
    }
}
cout<<"NO"; 
 return 0;
}
