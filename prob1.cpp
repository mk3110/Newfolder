#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t );
    while(t--)
    {
        unsigned long long int n,k;
    	scanf("%llu", &n);
    	if(n%2==0)
    	{
    		k=n*n/2;
    		printf("%llu\n", n*n/2);
		}
    	else
    	{
    		k=n*n;
    		printf("%llu\n", n*n);
		}
    	
	}
	return 0;
}
