#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	int myNum;
	ptr=&myNum;
	cout<<"Enter a number: ";
	cin>>myNum;
	cout<<"The pointer values is "<< *ptr <<" the memory address is: "<<ptr;

}
