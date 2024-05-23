#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, bt[100], wt[100], tat[100], avwt=0, avtat=0;
    cout<<"Process number: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"\nProcess"<<i+1<<": ";
        cin>>bt[i];
    }

    wt[0]=0;

    for(i=1; i<n; i++)
    {
        wt[i]=0;
        for(j=0; j<i; j++)
        {
            wt[i]+=bt[j];
        }
    }

    cout<<"\nProcess\tBrust\twaiting\tTAT"<<endl;

    for(i=0; i<n; i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<i+1<<"\t"<<bt[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
    }

    avwt/=i;
    avtat/=i;
    cout<<"Av wt"<<avwt<<endl;
    cout<<"Av tat"<<avtat<<endl;

}
