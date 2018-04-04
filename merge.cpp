#include<iostream>
#include<vector>

using namespace std;
void mergex(vector <int> &l,vector <int> &r,vector <int>& arr)
{
    int ls=(int)l.size();
    int rs=(int)r.size();int i=0,j=0,k=0;
    while(i<ls&&j<rs)
    {
        if(l[i]<r[j])
        {
            arr[k]=l[i];
            i++;k++;
                    }
        else
        {
            arr[k]=r[j];
            j++;k++;

        }

    }
    while(i<ls)
    {
        arr[k]=l[i];
        i++;
        k++;

    }
    while(j<rs)
    {
        arr[k]=r[j];
        k++;
        j++;

    }


}
void merge_sort(vector <int> &arr)
{vector <int>l ;
vector<int> r;
int n=arr.size();
if(n<2)
    return ;
else{



int mid=n/2;
for(int i=0;i<mid;i++)
    l.push_back(arr[i]);
for(int i=mid;i<n;i++)
{
    r.push_back(arr[i]);
}
    merge_sort(l);
    merge_sort(r);
    mergex(l,r,arr);}

}
int main()
{  int n;
   cin>>n;
   vector <int> f(n);
   for(int i=0;i<n;i++)
   {
       cin>>f[i];

   }
   merge_sort(f);
   for(int i=0;i<n;i++)
    cout<<f[i];
   return 0;

}
