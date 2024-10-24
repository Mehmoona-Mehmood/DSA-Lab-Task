//deletion in start

#include <iostream>
using namespace std;
int main(){

int size,arr[size];
cout<< "Enter size of an array: "<<endl;
 cin >>size;

 cout << "Enter the elements in the  array: " << endl;
 for(int i=0;i<size;i++) 
	{
        cin>>arr[i];
    }
    
   //logic 
for(int i=0;i<size;i++)
	 {
        arr[i]=arr[i+1];
    }
    size--;
    
    
    cout<< "Array  after deletion: "<<endl;
    for(int i=0;i<size;i++)
	 {
        cout<<arr[i]<<endl;
    }

return 0;
}