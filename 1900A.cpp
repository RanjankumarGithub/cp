#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt = 0;
        bool found = true;

        for(int i = 0; i < n; i++){
            if(s[i] == '.') cnt++;

            if(i > 0 && i <n-1)
                if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                    cout<<2<<endl;
                    found = false;
                    break;
                    }
        }
        if(found) cout<<cnt<<endl;
            
    }
}