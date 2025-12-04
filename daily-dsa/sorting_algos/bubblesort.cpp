# include <iostream>
using namespace std;
void bubblesort(int arr[],int n){ //Time complexity O(n^2)
    for(int i=0;i<n-1;i++){
        bool isSwap= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
} 
int main(){
    int n=5;
    int arr[]={4,5,3,2,1};
    bubblesort(arr,n);
    printarr(arr,n);

    return 0;
}


