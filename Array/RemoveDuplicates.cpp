#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr.empty()) return 0;
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return i+1;
}