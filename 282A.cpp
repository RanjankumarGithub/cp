#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int ans = 0;
    while(n--){
        string x;
        cin>>x;
        if(x == "++X" || x == "X++") ans++;
        else ans--;
    }
    cout<<ans<<endl;
}