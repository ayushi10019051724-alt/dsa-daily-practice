#include <iostream>
#include<cmath>
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;
int maxSubArrSum(int arr[],int n){
    int cursum=0; int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        maxsum=max(cursum,maxsum);
        if(cursum<0){
            cursum=0;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={1,-5,4,3,-2,-1,2,-4};
    int n=8;
    int result =maxSubArrSum(arr,n);
    cout<< result<< endl;
}