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

    void addValue(int val){
    	cout << "\tEnter number: ";
    	cin >> val;
    	Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;             
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
   	int traverse(){    
		Node *n = head;
        int ret = n->x;

        head = head->next;
        for(int i=0; i<z; i++)
        return ret; 		
	}

    
    void menu(){
		system("cls");
    	cout << "\t\t\tMenu" << endl;
    	cout << "\t[1] Add" << endl;
    	cout << "\t[2] Pop" << endl;
    	cout << "\t[3] Traverse" << endl;
    	cout << "\t[4] Exit" << endl;
    	cout << "\tEnter your choice: ";
    	cin >> choice;
	}
	
	void cases( int c){
		switch(c)
		{
			case 1:
				 addValue(x);
				 z++;
				 break;
			case 2:
				if(z==0)
				{
					cout << "\tEMPTY!";
				}
				else
				{
				cout << "\tYou Pop the Value: " << popValue() << endl;
				z--;
				}
				break;
			case 3:
				 cout << traverse();
				 break;
			case 4:
				exit(1);
				break;
			default:
				cout << "\tInvalid!" << endl;
				break;
		}
		system("pause");
		getch();		
	}

private:
    Node *head; 
};

int main() {
    LinkedList list;

  /*	list.addValue(5);
    list.addValue(10);
    list.addValue(20);
    list.menu();
*/
while(1)
{

	list.menu();
	list.cases(choice);
}
   // cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    return 0;
}
