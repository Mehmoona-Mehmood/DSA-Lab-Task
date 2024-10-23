#include <iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of array:"<<endl;
cin>>size;

int arr[size];
cout<<"Enter the  array elements:"<<endl;
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}

int evenCount=0,oddCount=0;

for(int i=0;i<size;i++)
{
	if(arr[i]%2==0)
	{
	evenCount++;	
	}
	else
	{
		oddCount++;
}
}

cout<<"Number of Even Numbers:"<<evenCount<<endl;
cout<<"Number of Odd Numbers:"<<oddCount<<endl;
return 0;
}
