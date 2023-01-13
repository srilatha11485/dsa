#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int i=0;
    int j=n-1;
    int mid=i+(j-i)/2;
    while(i<=j){
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            j=mid-1;
        }
        if(key>arr[mid]){
            i=mid+1;
        }
        mid=i+(j-i)/2;
    }
    return -1;
}
int main(){
    int e[5]={1,2,4,5,6};
    cout<<binarySearch(e,5,7);
    return 0;
}
