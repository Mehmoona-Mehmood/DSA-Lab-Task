//deletion in end

#include <iostream>
using namespace std;
int main(){

    int arr[10],x,n,i;

    cout << "Enter size of an array: "<<endl;
    cin >> n;

    cout << "Enter the elements in the  array: " << endl;
    for(int i=0;i<n;i++) 
	{
        cin>>arr[i];
    }
    

    n--;
   
    
    cout<< "Array  after deletion: "<<endl;
    for(int i=0;i<n;i++)
	 {
        cout<<arr[i]<<endl;
    }

return 0;
}
