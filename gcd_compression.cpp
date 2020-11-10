
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[2*n];
		for(int i=0;i<2*n;i++)
		cin>>arr[i];
		int odd=0,even=0;
		for(int i=0;i<n*2;i++)
		{
			if(arr[i]&1)
			odd++;
			else
			even++;
		}
		if(odd&1)
		{
			for(int i=0;i<n*2;i++)
			{
				if(arr[i]&1)
				{arr[i]=0;
					break;
				}
				}
				for(int i=0;i<n*2;i++)
			   {
				if(arr[i]%2==0)
				{arr[i]=0;
					break;
				}
				}
			for(int i=0;i<2*n-1;i++)
			{
				for(int j=i+1;j<2*n;j++)
				{if(arr[i]%2!=0 && arr[j]%2!=0 && arr[i]!=0 && arr[j]!=0)
					{cout<<i+1<<" "<<j+1<<"\n";
						arr[i]=0;
						arr[j]=0;
						break;}
					
					if(arr[i]%2==0 && arr[j]%2==0 && arr[i]!=0 && arr[j]!=0)
					{cout<<i+1<<" "<<j+1<<"\n";
						arr[i]=0;
						arr[j]=0;
						break;}
					}
				}
			}
			else
			{
				int count=0;
				if(odd>=2){
			for(int i=0;i<n*2;i++)
			{
				if(arr[i]&1 &&count<2)
				{arr[i]=0;
					count++;
				}
				}}
				else
				{
			for(int i=0;i<n*2;i++)
			{
				if(arr[i]%2==0 &&count<2)
				{arr[i]=0;
					count++;
				}
				}}
				
				
				
				for(int i=0;i<2*n-1;i++)
			{
				for(int j=i+1;j<2*n;j++)
				{if(arr[i]%2!=0 && arr[j]%2!=0 && arr[i]!=0 && arr[j]!=0)
					{cout<<i+1<<" "<<j+1<<"\n";
						arr[i]=0;
						arr[j]=0;
						break;}
					
					if(arr[i]%2==0 && arr[j]%2==0 && arr[i]!=0 && arr[j]!=0)
					{cout<<i+1<<" "<<j+1<<"\n";
						arr[i]=0;
						arr[j]=0;
						break;}
					}
				
				
			}
			}
		}
	
	}
				
