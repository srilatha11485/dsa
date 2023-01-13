#include <bits/stdc++.h> 
int firstOccurence(vector<int>& arr,int n,int k){
        int i=0;
        int j=n-1;
        int ans=-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            if(arr[mid]==k){
                ans=mid;
                j=mid-1;
            }
            else if(k<arr[mid]){
                j=mid-1;
            }
            else if(k>arr[mid]){
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return ans;
    }
    int lastOccurence(vector<int>& arr,int n,int k){
        int i=0;
        int j=n-1;
        int ans=-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            if(arr[mid]==k){
                ans=mid;
                i=mid+1;
            }
            else if(k<arr[mid]){
                j=mid-1;
            }
            else if(k>arr[mid]){
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return ans;
    }
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstOccurence(arr,n,k);
    p.second=lastOccurence(arr,n,k);
    return p;
}
