#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int k, string direction);
void reverseArray(vector<int>& arr, int start, int end);
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    string direction;
    cin>>direction;
    vector<int> result= rotateArray(arr,k,direction);
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}
void reverseArray(vector<int>& arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
vector<int> rotateArray(vector<int>& arr, int k, string direction) {
    int n = arr.size();
    if(n==0 || k==0) return arr;
    k=k%n;
    if(direction=="right"){
        reverseArray(arr,0,n-1);
        reverseArray(arr,0,k-1);
        reverseArray(arr,k,n-1);
    }
    else if(direction=="left"){
        reverseArray(arr,0,k-1);
        reverseArray(arr,k,n-1);
        reverseArray(arr,0,n-1);
    }
    return arr;

}
