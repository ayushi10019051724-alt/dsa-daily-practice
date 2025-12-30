# include <iostream>
# include <vector>
using namespace std;
int peakelement(vector<int>&arr,int n){
    int st=1;
    int ed=n-2;
    while(st<=ed){
        int mid=st+(ed-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid+1]>arr[mid]){
            st=mid+1;
        }
        else{
            ed=mid-1;
        }
    }
    return 0;
}

int main(){
    vector <int>arr={1,2,3,4,6,7,8,7,6,5,4,3};
    int n= arr.size();
    int idx=  peakelement(arr,n) ;
    if(idx!=-1){
        cout<< "peak idx" << idx<< endl;
        cout<< "peak value" << arr[idx] << endl;
    }

}
