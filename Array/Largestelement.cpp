#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(largest<=arr[i]){
            largest=arr[i];
        }
    }
    cout<<largest;
    return 0;
}