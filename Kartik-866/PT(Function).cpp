#include<iostream>
int fac(int );
main()
{
	using namespace std;
    int n,i,j;
    puts("Enter number of lines");
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j;j--)
            cout<<" ";
        for(j=0;j<=i;j++)
            cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
        puts("");
    }
}
int fac(int x)
{
    if(x==0)
        return 1;
    else
        return (x*fac(x-1));
}
