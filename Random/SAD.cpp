#include<bits/stdc++.h>
using namespace std;

void net_benefit()
{
    int years,cost,benefit;
    int total_cost=0;
    int total_benefit = 0;
    cout<<"How many years you do business: ";
    cin>>years;
    for(int i=1; i<=years; i++)
    {
        cout<<"Year Number "<< i << " Cost : ";
        cin>>cost;
        total_cost+=cost;
        cout<<"Year Number "<< i << " Benefit : ";
        cin>>benefit;
        total_benefit+=benefit;
    }
    cout<<endl;
    cout<<"Net benefit "<< total_benefit - total_cost;
    cout<<endl;
    cout<<endl;
}
void present_value()
{
    float future_value,interest,years,present_value;
    cout<<"What will be future value : ";
    cin>>future_value;
    cout<<"Enter the interest rate in (percentage) : ";
    cin>>interest;
    cout<<"Enter the years : ";
    cin>>years;
    interest = interest / 100 ;
    present_value = future_value /pow(( 1+ interest ),years);
    cout<<endl;
    cout<<"Present value is : "<<present_value<<endl;
    cout<<endl;
}
void future_value()
{
    float future_value,interest,years,present_value;
    cout<<"What is the present value : ";
    cin>>present_value;
    cout<<"Enter the interest rate in (percentage) : ";
    cin>>interest;
    cout<<"Enter the years : ";
    cin>>years;
    interest = interest / 100 ;
    future_value = present_value * pow((1+interest),years);
    cout<<endl;
    cout<<"Future value will be : "<<future_value<<endl;
    cout<<endl;
}
void net_present_value()
{
    float total_cost,total_benefit,net_benefit;
    cout<<"Enter total benefit : ";
    cin>>total_benefit;
    cout<<"Enter total cost : ";
    cin>>total_cost;
    net_benefit = total_benefit - total_cost;
    float net_present_val = (net_benefit / total_cost)*100;
    cout<<endl;
    cout<<"Net present value is : "<<net_present_val<<"%"<<endl;
    cout<<endl;
}
int main()
{
    cout<<"\t\t\t##########"<<endl;
    cout<<"\t\t\tMenu:"<<endl;
    cout<<"\t\t\t 1. Net benefit"<<endl;
    cout<<"\t\t\t 2. Present value"<<endl;
    cout<<"\t\t\t 3. Future value"<<endl;
    cout<<"\t\t\t 4. Net present value"<<endl;
    cout<<"\t\t\t 5. Clear screen "<<endl;
    cout<<"\t\t\t Any Key except (1-5) for exit "<<endl;
    int option;
    cout<<"Select Any option: ";
    cin>>option;
    switch(option)
    {
    case 1:
        net_benefit();
        main();
        break;
    case 2:
        present_value();
        main();
        break;
    case 3:
        future_value();
        main();
        break;
    case 4:
        net_present_value();
        main();
        break;
    case 5:
        system("cls");
        main();
    default:
        break;
    }
    return 0;
}
