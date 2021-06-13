#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int a[100],i,j,temp,max;

cout<<"\n Enter The Length Of Array: ";
cin>>max;
cout<<"\n Enter the Values In Array: ";
for(i=1;i<=max;i++)
{
cin>>a[i];
}
for(i=1;i<=max;i++)
{
for(j=i+1;j<=max;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<" The Sorted Array Is: "<<endl;
for(i=1;i<=max;i++)
{
cout<<a[i]<<endl;
}
getch();
return 0;
}
