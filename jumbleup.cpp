#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int rangen(int start,int fin)
{
    int sol;
    sol=start+rand()%(fin-start+1);
    return sol;
}

int main()
{
   char ans;
    do
    {string s;
    cin>>s;
    int siz=s.size()-1;
    for(int i=0;i<s.size();i++)
    {
        int z=rangen(0,siz);
        swap(s[i],s[z]);

    }cout<<s;
    cout<<endl;
    cin>>ans;
    cout<<endl;
    }while(ans=='y');
    return 0;





}
