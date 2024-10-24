#include <iostream>
using namespace std;
int main(){

int rows,cols;
cout<<"Enter rows:"<<endl;
cin>>rows;
cout<<"Enter colmns:"<<endl;
cin>>cols;

int **a=new int*[rows];
for(int i=0;i<rows;i++)
{
	a[i]=new int[cols];
}

cout<<"enter the elements:"<<endl;
for(int i=0;i<rows;i++)
{
	for(int j=0;j<cols;j++)
{
	cin>>a[i][j];
}

}



cout<<"You have entered:"<<endl;

for(int i=0;i<rows;i++)
{
	for(int j=0;j<cols;j++)
{
	cout<<a[i][j]<<" ";
}
cout<<endl;
}

for(int i=0;i<rows;i++)
{
	delete[] a[i];
}
delete []a;

return 0;
}
