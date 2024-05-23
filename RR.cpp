#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, y, At[100], ct=0, bt[100], tat=0, wt=0, temp[100], q;
    float av_wt=0, av_tat=0;
    bool isProcess=true;

    cout<<"Process: ";
    cin>>n;
    y=n;

    for(i=0; i<n; i++)
    {
        cout<<"AT"<<i+1<<": ";
        cin>>At[i];
        cout<<"BT"<<i+1<<": ";
        cin>>bt[i];
        temp[i]=bt[i];
    }

    cout<<"Q: ";
    cin>>q;

    cout<<"\nP   AT   BT   TAT   WT"<<endl;
    i=0;

    while(y!=0)
    {
        if(temp[i]<=q && temp[i]>0)
        {
            ct += temp[i];
            temp[i]=0;
            isProcess=false;
        }
        else if(temp[i]>0)
        {
            temp[i] -= q;
            ct += q;
            isProcess=true;
        }

        if(temp[i]==0 && !isProcess)
        {
            y--;
            tat = ct-At[i];
            wt = tat-bt[i];

            cout<<"P"<<i+1<<"   "<<At[i]<<"   "<<bt[i]<<"   "<<tat<<"   "<<wt<<endl;

            tat += tat;
            wt += wt;
            isProcess=true;
        }

        if(i==n-1)
        {
            i= 0;
        }
        else if(At[i]<ct)
            i++;
        else
            i=0;
    }
}
















