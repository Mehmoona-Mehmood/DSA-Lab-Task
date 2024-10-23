#include <iostream>
using namespace std;
int main(){

int arr[5];


cout<<"enter the array elements:"<<endl;
for(int i=0;i<5;i++)
{
	cin>>arr[i];
}

int max=arr[0];
int min=arr[0];


for (int i=1;i<5;i++)
 {
    if(arr[i]>max)
 {
    max=arr[i];
    }
    
     if(arr[i]<min)
 {
    min=arr[i];
    }
}


cout<<"Maximum element is: "<<max<< endl;

cout<<"Minimum element is: "<<min<< endl;

return 0;
}

