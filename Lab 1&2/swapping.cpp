//pass by pointer
#include <iostream>
using namespace std;
void swap(int *num1, int *num2){
	
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

int main(){
int a=5;
int b=10;

cout<<"before swapping the numbers:a="<<a<<",b="<<b<<endl;
swap(&a,&b);
cout<<"after swapping the numbers:a="<<a<<",b="<<b<<endl;


return 0;
}
