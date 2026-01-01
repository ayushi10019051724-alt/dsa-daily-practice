#include <iostream>
#include <vector>
using namespace std;
int singleElementinsortedarray(vector<int>&arr,int n){
    int st=0;
    int ed=n-1;
    while(st<=ed){
        int mid=st+(ed-st)/2;
        if(mid == 0 && arr[mid] != arr[mid+1]) return arr[mid];  // edge cases
        if(mid == n-1 && arr[mid] != arr[mid-1]) return arr[mid];

        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]) return arr[mid];

        if(mid%2==0){
            if(arr[mid+1]==arr[mid]) st=mid+2;
            else ed=mid-1;
        }
        else{
            if(arr[mid-1]==arr[mid]) ed=mid-1;
            else st=mid+1;
        }
    }
    return -1;
}
int main(){
   /* vector <int> arr={1,1,2,2,3,3,4,5,5,6,6,7,7,8} ; // brute force approach
    for(int i=0;i<arr.size();i++){                   // O(n^2)      
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<< "single element" << arr[i]<< endl;
        }
    }
    return 0; */
    vector <int> arr={1,1,2,2,3,3,4,5,5,6,6,7,7} ;
    int n=arr.size();
    cout<<singleElementinsortedarray(arr,n);
}

