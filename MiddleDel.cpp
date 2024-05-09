
#include <iostream>
using namespace std;
class LinkList
{

    class getNode
    {
    public:
        int data;
        getNode *next;
        getNode()
        {
            next = NULL;
        }
    };

public:
    getNode *head = NULL;
    void append()
    {
        int data;
        cout << "Enter Data:";
        cin >> data;
        getNode *newNode = new getNode();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
            cout << "New Node is added" << endl;
        }
        else
        {
            getNode *ptr;
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
            cout << "New Node is added" << endl;
        }
    }
    void delmid()
    {

        int loc, c = 0;
        if (head == NULL)
        {

            cout << "List Empty" << endl;
        }
        else
        {
            getNode *ptr, *cur;
            ptr = head;
            while (ptr != NULL)
            {
                c++;
                ptr = ptr->next;
            }
            loc = c / 2;
            ptr = head;
            for (int i = 1; i <= loc - 1; i++)
            {

                ptr = ptr->next;
            }

            cur = ptr->next;
            ptr->next = cur->next;

            cout << "Middle Element removed" << endl;
        }
    }
    void rotate()
    {
        getNode *temp, *start;
        int loc;
        cout << "Enter location to rotate:";
        cin >> loc;
        if (head == NULL)
        {

            cout << "List Empty" << endl;
        }
        else
        {
            getNode *ptr, *cur;
            ptr = head;
            for (int i = 1; i <loc-1; i++)
            {

                ptr = ptr->next;
            }
            
            start = head;
            temp = ptr->next;
            ptr->next = NULL;
            head=temp;
            while(temp->next!=NULL){
            temp=temp->next;
            }
            temp->next=start; 
            
            
            
            
            cout << "Element are Rotated";
        }
    }

    void display()
    {
        getNode *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "NULL";
    }
};
int main()
{
    LinkList obj;
    int n;
    while (1)
    {
        cout << "\nEnter Your Choice:" << endl;
        cout << "1. Append  " << endl
             << "2. Delete Middle of list" << endl
             << "3. Display" << endl
             << "4. Rotate Linked List" << endl
             << "0. exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            obj.append();
            break;
        case 2:
            obj.delmid();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            obj.rotate();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice";
        }
    }
}