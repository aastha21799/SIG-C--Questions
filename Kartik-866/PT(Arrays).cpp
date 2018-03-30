#include<iostream>
main()
{
	using namespace std;
	int i, n, j, sum, t;
	cout<<"Enter the number of lines\n";
	cin>>n;
	int arr[n];
	arr[0]=1;
	if(n>1)
	arr[1]=1;

	for(i=0;++i<=n;)
	{
		for(j=n-i;j;j--)
            cout<<" ";

		for(j=0;++j<=i;)
		{
			if(j==1||j==i)
			cout<<"1 ";

			else
			{
				t=sum;
				sum=arr[j-2]+arr[j-1];
				cout<<sum<<" ";

				if(j==i-1)
				{
					arr[j-1]=sum;
					arr[j]=1;
				}
				if(j>2)
				arr[j-2]=t;
			}
		}
		puts("");
	}
}
