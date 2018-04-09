#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
void permute(string s,int l,int r)
{if(l==r)
{cout<<s;
cout<<endl;
}
else
{
    for(int i=l;i<=r;i++)
    {swap(s[l],s [i]);
    permute(s,l+1,r);
     swap(s[l],s[i]);
    }

}

}
int main()
{string s;
cin>>s;
int l,r;
l=0;r=s.size()-1;
permute(s,l,r);
return 0;

}
