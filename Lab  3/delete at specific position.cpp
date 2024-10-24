//delete at specific postion 
#include <iostream>
using namespace std;
int main(){
int size,arr[size],index;
cout<<"enter the size of an array:"<<endl;
cin>>size;

cout<<"enter the array elements:"<<endl;
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}

cout<<"enter the array index you want to delete :"<<endl;
cin>>index;


// deletion logic
for(int i=index;i<size-1;i++)

{
	arr[i]=arr[i+1];
}

size--;

cout<<"After deletion the element of array"<<endl;
for(int i=0;i<size;i++)

{
	cout<<arr[i]<<endl;
}


return 0;
}
