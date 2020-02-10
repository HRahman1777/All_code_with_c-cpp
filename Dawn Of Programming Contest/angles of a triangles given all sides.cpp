//cos(C) =  (a2 + b2 - c2) / 2ab

//cos(A) =  (b2 + c2 - a2) / 2bc

//cos(B) =  (c2 + a2 - b2) / 2ca

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double a, b, c, tm1, res1;

    cin>>a>>b>>c;

    tm1 = (a*a + b*b - c*c)/(2*a*b);
    cout<<tm1<<endl;

    res1 = acos(tm1);

    cout<<res1<<endl;

    return 0;
}
