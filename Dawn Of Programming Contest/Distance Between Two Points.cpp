#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int x1, x2, y1, y2;
    double res1, res2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    // formula = rot((x2-x1)^2 + (y2-y1)^2)
    res1 = pow((x2-x1), 2)+pow((y2-y1), 2);

    if(res1 >= 0){   //sqrt cant work with non-negative value (RTE)
        res2 = sqrt(res1);
        cout<<res2<<endl;

    }else{

     cout<<"find another way!"<<endl;

    }


    return 0;
}
