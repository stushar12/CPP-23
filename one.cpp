#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int p;
	cin>>p;
	while(p)
	{
	    int n;
	    int k;
	    int a;
	    vector<int> v;
	    map<int,int> m;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	    {
	       cin>>a;
	       v.push_back(a);
	    }
	    int sum=0;
int length=0;
bool flag=false;
int maxlength=INT32_MIN;
for(int i=0;i<n;i++)
{
    sum=sum+v[i];
    if(sum==k)
    {
        maxlength=i+1;
        flag=true;
    }
    else if(m.find(sum-k)!=m.end())
    {
        length=i-m[sum-k];
        if(maxlength<length)
        {
                        flag=true;
                        maxlength=length;
        }
    }
    if(m.find(sum)==m.end())
    {
        m[sum]=i;
    }
}
if(flag)
{
    cout<<maxlength<<endl;
}
else
{
    cout<<"0"<<endl;
}
p--;
	}
}
