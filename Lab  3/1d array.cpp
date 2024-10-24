//1d array

#include <iostream>
using namespace std;
int main(){

int size;
int *p;
cout<<"Enter the size of an array:"<<endl;
cin >>size;

p=new int[size];
for(int i=0;i<size;i++)
{
cout<<"Enter a number:"<<endl;
cin>>p[i];	
}


cout<<"You have entered:"<<endl;
for(int i=0;i<size;i++)
{
	cout<<p[i]<<endl;
	
}
delete[]p;
return 0;
}
