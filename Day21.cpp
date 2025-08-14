#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr.begin(),arr.end(),greater<int>());
    int taken_sum=0,count=0;

    for(int i=0;i<n;i++){
        taken_sum+=arr[i];
        count++;

        if(taken_sum > sum - taken_sum){
            break;
        }
    }
    cout<<count;

    return 0;


}
