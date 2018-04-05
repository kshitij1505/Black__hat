#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int  part(vector <int>& arr,int start,int en)
{
    int pivoti=en;
    int pivot=arr[pivoti];
    int pIndex=start;
    for(int i=start;i<en;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[pIndex]);
            for(int i=0;i<arr.size();i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            pIndex++;
        }

    }
    swap(arr[pIndex],arr[pivoti]);
    return pIndex;

}
void quick_sort(vector <int>& arr,int start,int en)
{if(start<en){
    int pIndex=part(arr,start,en);
    quick_sort(arr,start,pIndex-1);
    quick_sort(arr,pIndex+1,en);
}

}
int main()
{
 int n;
 cin>>n;
 vector <int> arr(n);
 for(int i=0;i<n;i++)
 cin>>arr[i];
 quick_sort(arr,0,n-1);
 for(int i=0;i<n;i++)
 cout<<arr[i];

}
