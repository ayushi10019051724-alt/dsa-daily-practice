#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"eneter your string"<< endl;
    getline(cin,str);
    string revstr=str;
    reverse(revstr.begin(),revstr.end());
    if(str==revstr){
        cout<<"string is palindrome " << endl;
    }
}
