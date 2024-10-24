#include <iostream>
using namespace std;

int main() {
    int arr[10],x,n;

    cout << "Enter size of an array: "<<endl;
    cin >> n;

   
    cout << "Enter the elements in the  array: " << endl;
    for(int i=0;i<n;i++) 
	{
        cin>>arr[i];
    }

    cout<<"Enter a number to insert at the start: "<<endl;
    cin>>x;
    
    for(int i=n;i>0;i--) 
	{
        arr[i]=arr[i-1];
    }

    arr[0]=x;
    n++;
    
    cout<< "After insertion array elements are: "<<endl;
    for(int i=0;i<n;i++)
	 {
        cout<<arr[i]<<endl;
    }

    return 0;
}