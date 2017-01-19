#include <iostream>
#include <conio.h>
using namespace std;

int choice, x, z;
class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }
    
  	void display (){
	    struct Node *ptr1=head;
		cout << "\tStack List:" << endl;
	    while(head != NULL)
	    {
	        cout << "\t" << head -> x << endl;
	        head = head -> next;
	    }
		
	}
    void addValue(int val){
    	cout << "\tEnter number: ";
    	cin >> val;
    	Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;             
    }

private:
    Node *head; 
};

int main() {
    LinkedList list;
    while(1){
		system("cls");
    	cout << "\t\t\tMenu" << endl;
    	cout << "\t[1] Add" << endl;
    	cout << "\t[2] Display" << endl;
    	cout << "\t[3] Exit" << endl;
    	cout << "\tEnter your choice: ";
    	cin >> choice;
    	
		switch(choice)
		{
			case 1:
				 list.addValue(x);
				 z++;
				 break;

			case 2:
				if (z == 0){
	    		cout << "STACK IS EMPTY!";
				}
				else
				{
					list.display();
				}
				break;
			case 3:
				exit(1);
				break;
			default:
				cout << "\tInvalid!" << endl;
				break;
		}
		getch();
	}
	}
