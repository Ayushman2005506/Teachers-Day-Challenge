#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int min=0;
    int count1=0;
    int count2=0;
    int count;

    for(int i=1;i<n;i++){
        if(arr[i]<=arr[min]){
            min=i;
        }
    }

    while(min<n-1){
        swap(arr[min],arr[min+1]);
        min++;
        count1++;
    }
    max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }

    while(max>0){
        swap(arr[max],arr[max-1]);
        max--;
        count2++;
    }
    count=count1+count2;
    cout<< count;

    return 0;
}
