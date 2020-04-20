#include<bits/stdc++.h>
using namespace std;

int reverserotate(int arr[],int start, int end){
  while(start<end){
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
  return 0;
}

int rightrotate(int arr[], int k, int n){
  k=k%n;
  reverserotate(arr, 0, n-k-1);
  reverserotate(arr, n-k, n-1);
  reverserotate(arr, 0, n-1);
  return 0;
}

int printarray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

int main(){
  int t;
  cin>>t;
  for(t;t>0;t--){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    rightrotate(arr, k, n);
    printarray(arr, n);

  }
  return 0;
}