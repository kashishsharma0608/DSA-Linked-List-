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
    void beginDel()
    {
        if (head == NULL)
        {

            cout << "Empty" << endl;
        }
        else
        {
            getNode *ptr;
            ptr = head;
            head = head->next;
            delete ptr;
        }
    }
    void endDel()
    {
        if (head == NULL)
        {

            cout << "Empty" << endl;
        }
        else
        {
            getNode *ptr, *ptr2;
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr2 = ptr;
                ptr = ptr->next;
            }

            ptr2->next = NULL;
            delete ptr2;
        }
    }
    void keyPos()
    {
        if (head == NULL)
        {

            cout << "Empty" << endl;
        }
        else
        {
            int key;
            cout << "enter key location:";
            cin >> key;
            getNode *ptr, *cur;
            ptr = head;
            while (ptr->next != NULL)
            {
                if (ptr->data == key)
                {
                    break;
                }
                ptr = ptr->next;
            }
            if (ptr->next == NULL)
            {
                cout << "key Not Present";
            }
            else
            {
                cur = ptr->next;
                ptr->next = cur->next;
            }

            delete cur;
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
        cout << "Enter Your Choice:" << endl;
        cout << "1. Append  " << endl
             << "2. Delete At Beginning" << endl
             << "3. Delete At end" << endl
             << "4. Delete after a key" << endl
             << "5. Display" << endl
             << "0. Exit";
        cin >> n;
        switch (n)
        {
        case 1:
            obj.append();
            break;
        case 2:
            obj.beginDel();
            break;
        case 3:
            obj.endDel();
            break;
        case 4:
            obj.keyPos();
            break;
        case 5:
            obj.display();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid" << endl;
            break;
        }
    }
    return 0;
}
