#include <iostream>
#include <vector>
using namespace std;
void reversearray(vector<int> &arr ,int n){
    int st=0, ed=n-1;
    while(st<=ed){
        swap(arr[st],arr[ed]);
        st++;
        ed--;
    }
}
int printarr(vector<int> &arr ,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
int main(){
    vector <int> arr={1,2,3,4,5};
    int n=arr.size();
    reversearray(arr,n);
    printarr(arr,n);

}