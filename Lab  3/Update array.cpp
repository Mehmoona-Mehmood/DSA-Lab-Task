//update in array 

#include <iostream>
using namespace std;
int main(){
int arr[3]={1,2,3};
cout<<"Original array:"<<endl;
for(int i=0;i<3;i++)
{
	cout<<arr[i]<<endl;
}
cout<<endl;

int index, newValue;
cout<<"Enter the index you want to update:"<<endl;
cin>>index;

if(index<0|| index>=3)
{
	cout<<"Invalid index!"<<endl;
	return 1;
}

cout<<"Enter the new value:"<<endl;
cin>>newValue;
arr[index]=newValue;
cout<<"Updated array:"<<endl;

for(int i=0;i<3;i++)
{
	cout<<arr[i]<<endl;
}


return 0;
}
