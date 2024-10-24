#include <iostream>
using namespace std;

int main() {
    int arr[10],x,n,i;

    cout << "Enter size of an array: "<<endl;
    cin >> n;

   
    cout << "Enter the elements in the  array: " << endl;
    for(int i=0;i<n;i++) 
	{
        cin>>arr[i];
    }

    cout<<"Enter a number to insert at the start: "<<endl;
    cin>>x;
    
    for(int i=0;i<n;i++) 
	{
        if(arr[i]==x){
        	cout<<"element found at index:"<<i<<endl;
        	break;
		}
    }

    if(i==n){
    	cout<<"elements not found in array:"<<endl;
	}
    return 0;
}