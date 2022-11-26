#include <bits/stdc++.h>
using namespace std;
unsigned long long a,b,c,d;	
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		if(a==4611686018427387904&&b==4611686018427387904&&c==4611686018427387904&&d==4611686018427387904)
		{
			printf("18446744073709551616");
		}
		else
		{
			printf("%lld",a+b+c+d);
		}
	}
	return 0;
}
