#include <stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

#define MAX 5
int top;

int pop (int stack[]) {
	int value;
	if (top == -1) {
		value = 0;

	} else {

		value = stack [top];
		--top;
	}
	return value;
}

void push (int stack[], int item) {

	++top;
	stack [top] = item;
}

void showstack (int stack[]) {
	int i;

	cout<<"\nStack contain: " << endl;

	for (i=top; i>=0; --i)
		cout<<""<<stack[i] << endl;

}

int main() {
	int stack [MAX], item;
	int ch;
	top = -1;

	while(1) {
		system("cls");
		cout<<"\nWhat do you want to do?";
		cout<<"\n\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\n3. Display ";
		cout<<"\n4. Exit ";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;

		switch (ch) {
			case 1:
				if (top != (MAX-1)) {
					cout<<"Push: ";
					cin>>item;
					push (stack, item);

					cout<<"You pushed: " << item;
				} else {

					cout<<"Stack is full";
				}

				break;
			case 2:
				if (top == -1) {
					cout<<"Stack is Empty.";
				}

				else {
					item = pop (stack);

					cout<<"You popped: " << item;
				}
				break;

			case 3:
				if (top == -1) {
					cout<<"Stack is empty.";
				} else {
					showstack (stack);
				}
				break;

			case 4:
				exit(1);
				break;

			default:
				cout<<"Wrong Choice";

		}
		getch();
	}
}

