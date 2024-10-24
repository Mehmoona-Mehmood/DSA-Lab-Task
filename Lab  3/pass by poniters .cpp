#include <iostream>
using namespace std;
void value(int *x)
{
	*x=20;
}
int main(){
int num=10;
cout<<"Before:"<<num<<endl;
value(&num);
cout<<"After:"<<num<<endl;

return 0;
}
