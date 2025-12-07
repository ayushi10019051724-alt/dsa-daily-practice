#include <iostream>
#include<cmath>
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;
/*int main(){
    int arr[]={1,2,3,4,5,6,8,5,3,2,1,2,3,4,5,2};
    int n=16;
    int freq=1;
    int maxfreq=1;
    int ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else 
        freq=1,ans=arr[i];

        if(freq>maxfreq){
        ans=arr[i];
        maxfreq=freq;
        }
    }
    cout<<ans<<" "<<maxfreq<<endl;

    
}*/
//Moore's algo
int majorityEle(int arr[],int n){
    int ans=0;
    int freq=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ans){
            count++;
        }
    }
    if(count>n/2){
        return ans;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,8,5,3,2,1,2,3,4,5,2};
    int n=16;
    int res=majorityEle(arr,n);
    cout<<res<<" ";

}