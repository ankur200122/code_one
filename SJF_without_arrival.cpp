#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bt[100], tat[100]={0}, wt[100]={0}, P[100];
    int index, total=0, i, j, n, temp;
    float av_wt, av_tat;

    cout<<"Process number: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"P"<<i+1<<": ";
        cin>>bt[i];
        P[i]=i+1;
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(bt[i]>bt[j])
            {
                temp= bt[i];
                bt[i]=bt[j];
                bt[j]=temp;

                temp=bt[i];
                bt[i]=P[i];
                P[i]=temp;
            }
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            wt[i]+=bt[j];

        }
        total+=wt[i];
    }

    av_wt=(float)total/n;
    total=0;

    cout<<"P   BT   TAT   WT"<<endl;
    for(i=0; i<n; i++)
    {
        tat[i]=wt[i]+bt[i];
        total+=tat[i];
        cout<<"P"<<P[i]<<"   "<<bt[i]<<"   "<<tat[i]<<"   "<<wt[i]<<endl;
    }

    av_tat=(float)total/n;
    cout<<"Avg TAT: "<<av_tat<<endl;
    cout<<"Avg WT: "<<av_wt<<endl;

}










