#include<iostream>
using namespace std;

int main(){
    int tc, x, a, b, c, d;
    cin >> tc;
    while(tc--){
        cin>>x>>a>>b>>c>>d;
        if( ( (c+d)/(a+b) ) == x  ){
            cout<<"Yes1\n";
        }
        else if( ( (c+d)/(a-b) ) == x  ){
            cout<<"Yes2\n";
        }
        else if( ( (c-d)/(a+b) ) == x  ){
            cout<<"Yes3\n";
        }
        else if( ( (c-d)/(a-b) ) == x  ){
            cout<<"Yes4\n";
        }
    }

    return 0;
}
