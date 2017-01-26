#include<iostream>
using namespace std;

int main()
{
	int arrName[]={1,2,3,4,5};
	int *ptr;
	ptr=arrName;
	
	cout << "Array content:";
	for(int i=0;i<5;i++)
	{
		cout<< " " <<*ptr;
		ptr++;
	}
}
