#include <iostream>
using namespace std;
int main()
{
    int i,j,bNo,pNo,bSize[10],bSeq[10],pSize[10];
    int bCheck[10],track[10];
    cout<<"Enter the number of blocks: ";
    cin>>bNo;
    cout<<"Enter size of each blocks:"<<endl;
    for(i=0; i<bNo; i++)
    {
        bSeq[i]=i+1;
        cout<<"B"<<bSeq[i]<<": ";
        cin>>bSize[i];
    }
    cout<<"Enter no of processes:";
    cin>>pNo;
    cout<<"Enter the size of each processes: "<<endl;
    for(i=0; i<pNo; i++)
    {
        cout<<"P"<<i+1<<": ";
        cin>>pSize[i];
    }
    for(i=0; i<bNo; i++)
    {
        bCheck[i]=-1;
        track[i]=-1;
    }
    int temp;
    for(i=0; i<bNo; i++)
    {
        for(j=i+1; j<bNo; j++)
        {
            if(bSize[j]<bSize[i])
            {
                temp=bSize[i];
                bSize[i]=bSize[j];
                bSize[j]=temp;
                temp=bSeq[i];
                bSeq[i]=bSeq[j];
                bSeq[j]=temp;
            }
        }
    }
    for(i=0; i<pNo; i++)
    {
        for(j=0; j<bNo; j++)
        {
            if(bCheck[j]==-1 && pSize[i] <= bSize[j])
            {
                bCheck[j]=i;
                track[i]=j;
                break;
            }
        }
    }
    cout<<"\nProcess no.\tProcess size\tBlock no.\tBlock size ";
    for(i=0; i<pNo; i++)
    {
        cout<<"\n"<<i+1<<"\t\t"<<pSize[i]<<"\t";
        if(bCheck[i]!=-1)
            cout<<"\t"<<bSeq[track[i]]<<"\t\t"<<bSize[track[i]];
        else
            cout<<"Not allocated";
    }
}
