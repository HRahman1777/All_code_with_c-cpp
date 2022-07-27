#include <bits/stdc++.h>
using namespace std;
int main() {
    string str, newstr="";
    cin>>str;

    for(int i=0; i<str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y'){
        continue;
    }else{
        newstr.push_back(tolower(str[i]));
    }
    
    }
    string finalstr="";
    
    for(int i=0; i<newstr.size(); i++){
        finalstr.push_back('.');
        finalstr.push_back(newstr[i]);
    }
    
    cout << finalstr << "\n";

    return 0;
}