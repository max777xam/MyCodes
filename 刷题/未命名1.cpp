#include <bits/stdc++.h>
using namespace std;
int a[501],b[501];	
int sum;
int main()
{
	int n,k;
	cin>>n;
	while(n--)
	{
		cin>>k;
		
		int sum=0;
		
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
			
		}
		
		for(int i=1;i<=k-1;i++)
		{
			b[i]=a[i+1]-a[i]-1;
			sum+=b[i];
		}
		int ans=sum-min(b[1],b[k-1]);
		cout<<ans<<endl;
	}
	return 0;
}\\if(a==4611686018427387904&&b==4611686018427387904&&c==4611686018427387904&&d==4611686018427387904)
		{
			printf("18446744073709551615");
		}
