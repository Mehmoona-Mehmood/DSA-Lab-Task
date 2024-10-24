#include<iostream>
using namespace std;
int passbyvalue(int x){
	x=20;
	return x;
}
int main(){
 int a=10;
 
 cout<<"before:"<<a<<endl;
 a=passbyvalue(a);
 cout<<"after:"<<a<<endl;
 return 0;
}