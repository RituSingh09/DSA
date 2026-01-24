#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<2) return -1;
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            
            second_largest=largest;
            largest=arr[i];
            
        }
        else if(second_largest<arr[i] && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<second_largest;
    return 0;

}