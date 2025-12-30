#include <iostream>
using namespace std;
int binarysearch(int arr[],int target,int n){
    int st=0,ed=n-1;
    while(st<=ed){
        int mid=st+(ed-st)/2;
        if(arr[mid]==target){//mid answer
            return mid;
        }
        if(arr[mid]>=arr[st]){ //left sorted
            if(arr[st]<=target && target<=arr[mid]){
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[ed]){
                st=mid+1;
            }
            else{
                ed=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,5,6,7,8,0,1};
    int target=6;
    int n=9;
    cout<< binarysearch(arr,target,n)<< endl;
}