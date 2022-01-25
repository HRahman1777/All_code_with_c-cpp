#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    int roll[100], marks[100];
    string name[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>roll[i]>>name[i]>>marks[i];

    }
    int temp, j;
    for(int i=1; i<n; i++)
	{
		temp=marks[i];
		j=i-1;
		while((temp<marks[j]) && (j>=0))
		{
			marks[j+1]=marks[j];
			j=j-1;
		}
		marks[j+1]=temp;
	}

    for(int i=0; i<n; i++)
        cout<<marks[i];

    return 0;
}
