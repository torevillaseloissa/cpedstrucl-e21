#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n);

int main(){
	int n;
	while(1)
	{
	system("cls");
	cout<<"Enter n:";
	cin>>n;
	cout<<"The factorial is:"<<factorial(n);	
	getch();
}
}
	
int factorial(int n){
	if (n < 1)
	
	return 1;
	
	else 
	
	return n * factorial(n-1);
}
