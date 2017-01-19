#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct node {
	int data;
	struct node * next;
}*head;

int count() {
	struct node * n;
	int c = 0;
	n = head;
	while (n != NULL) {
		n = n -> next;
		c++;
	}
	return c;
}

void append(int num) {
	struct node * temp, * right;
	temp = (struct node * ) malloc(sizeof(struct node));
	temp -> data = num;
	right = (struct node * ) head;
	while (right -> next != NULL)
		right = right -> next;
	right -> next = temp;
	right = temp;
	right -> next = NULL;
}

void add(int num) {
	struct node * temp;
	temp = (struct node * ) malloc(sizeof(struct node));
	temp -> data = num;
	if (head == NULL) {
		head = temp;
		head -> next = NULL;
	} else {
		temp -> next = head;
		head = temp;
	}
}

void addafter(int num, int loc) {
	int i;
	struct node * temp, * left, * right;
	right = head;
	for (i = 1; i <= loc; i++) {
		left = right;
		right = right -> next;
	}
	temp = (struct node * ) malloc(sizeof(struct node));
	temp -> data = num;
	left -> next = temp;
	left = temp;
	left -> next = right;
	return;
}

int delete_val(int num) {
	struct node * temp, * prev;
	temp = head;
	while (temp != NULL) {
		if (temp -> data == num) {
			if (temp == head) {
				head = temp -> next;
				return 1;
			} else {
				prev -> next = temp -> next;
				return 1;
			}
		} else {
			prev = temp;
			temp = temp -> next;
		}
	}
	return 0;
}

void insert(int num) {
	int c = 0;
	struct node * temp;
	temp = head;

	if (temp == NULL) {
		add(num);
	} else {
		while (temp != NULL) {
			if (temp -> data < num)
				c++;
			temp = temp -> next;
		}
		if (c == 0)
			add(num);
		else if (c > count())
			addafter(num, ++c);
		else
			append(num);
	}
}

void display(struct node * r) {
	r = head;
	if (r == NULL) {
		return;
	}
	while (r != NULL) {
		cout << r -> data;
		r = r -> next;
	}
	cout << "\n";
}

void search(int num) {
	struct node * n;
	int c = 0;
	bool flag = false;
	n = head;
	while (n != NULL) {
		
		if(n->data==num) {
			flag = true;
			cout<<"Location: " << c;
		}
		c++;
		n = n -> next;
	}
	if(!flag)
		cout << num << " is not found in the list!";
}

void delete_occ(int num) {
	struct node * n;
	int c = 0;
	bool flag = false;
	n = head;

	while (n != NULL) {
		if(n->data==num) {
			flag = true;
			delete_val(num);	
		}
		c++;
		n = n -> next;
	}
	if(!flag)
		cout << num << " is not found in the list!";
	else{
		cout<<"All " << num <<" has been deleted succesfully";
	}
}

void reverse(){
	struct node *ptr1, *ptr2, *ptr3;
	if (head -> next == NULL){
		return;
	}
	ptr1 = head;
	ptr2 = ptr1 -> next;
	ptr3 = ptr2 -> next;
	ptr1 -> next = NULL;
	ptr2 -> next = ptr1;
	while (ptr3 != NULL){
		ptr1 = ptr2;
		ptr2 = ptr3;
		ptr3 = ptr3 -> next;
		ptr2 -> next = ptr1;
	}
	head= ptr2;
}

int main() {
	int i, num, loc;
	struct node * n;
	head = NULL;

	while (1) {

		system("cls");
		cout << "Linked List Operations\n";
		cout << "===============\n";
		cout << "1.Insert\n";
		cout << "2.Add After\n";
		cout << "3.Delete\n";
		cout << "4.Delete Occurance\n";
		cout << "5.Display\n";
		cout << "6.Count\n";
		cout << "7.Reverse\n";
		cout << "8.Search\n";
		cout << "9.Exit\n";
		cout << "Enter your choice  : ";
		cin >> i;
		if (i <= 0) {
			cout << "Enter only a Postive Integer\n";
			exit(0);
		} else {
			switch (i) {
				case 1:
					cout << "Enter the number to insert : ";
					cin >> num;
					insert(num);
					break;

				case 2:
					if (head == NULL) {
						cout << "List is Empty\n";
					} else {
						cout << "Enter the number to add : ";
						cin >> num;
						cout << "Enter position: ";
						cin >> loc;
						addafter(num, loc);
					}
					break;

				case 3:
					if (head == NULL)
						cout << "List is Empty\n";
					else {
						cout << "Enter the number to delete : ";
						cin >> num;
						if (delete_val(num))
							cout << num << " deleted successfully\n";
						else
							cout << num << " is not found in the list\n";
					}
					break;

				case 4:
					if (head == NULL)
						cout << "List is Empty\n";
					else {
						cout<<"Enter number to delete: ";
						cin>>num;
						delete_occ(num);
						
				}
					break;

				case 5:
					if (head == NULL) {
						cout << "List is Empty\n";
					} else {
						cout << "Element(s) in the list are : ";
					}
					display(n);
					break;

				case 6:
					if (head == NULL) {
						cout << "List is Empty\n";
					} else {
						cout << "Count of the list is " << count() << endl;
					}
					break;

				case 7:
					if (head == NULL){
						cout << "List is Empty!\n";
					}
					else{
						reverse();
						cout << "Elements in Reverse: ";
						display(n);
					}
					break;

				case 8:
					if (head == NULL)
						cout << "List is Empty\n";
					else {
						cout << "Enter the number to search : ";
						cin >> num;
						search(num);
					}
					break;


				case 9:
					return 0;
				default:
					cout << "Invalid option\n";
			}
		}
		getch();
	}
	return 0;
}
