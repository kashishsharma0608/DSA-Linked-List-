// Linked list - data and next pointer.
// if the variable is register type then it store in register that doesnt have any address.
// we will implement it through nested classes.
//|head|->|data|next|->|data|next|->|data|next|->|data|null|.

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
    void begin()
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
            newNode->next = ptr;
            head = newNode;
            cout << "New Node is added" << endl;
        }
    }
    void location()
    {
        int loc, c = 0;
        cout << "enter location:";
        cin >> loc;
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
            getNode *ptr, *cur;
            ptr = head;
            for (int i = 1; i < loc - 1; i++)
            {

                ptr = ptr->next;
            }
            cur = ptr->next;
            ptr->next = newNode;
            newNode->next = cur;

            cout << "New node added" << endl;
        }
    }
    void keyPos()
    {
        int key;
        cout << "enter key:" << endl;
        cin >> key;
        int data;
        cout << "Enter Data:" << endl;
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
            getNode *ptr, *cur;
            ptr = head;
            while (ptr->next != NULL)
            {
                if (ptr->data == key)
                    break;

                ptr = ptr->next;
            }
            if (ptr->next == NULL)
            {
                cout << "Key not present";
            }
            else
            {
                cur = ptr->next;
                ptr->next = newNode;
                newNode->next = cur;
            }
        }
    }

    void end()
    {
        int data;
        cout << "\nEnter Data:";
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
    void search()
    {
        int key, flag = 0;
        cout << "enter key:" << endl;
        cin >> key;
        if (head == NULL)
        {
            cout << "List Empty";
        }
        else
        {
            getNode *ptr;
            ptr = head;
            while (ptr != NULL)
            {
                if (ptr->data == key)
                {
                    flag++;
                    break;
                }
                ptr = ptr->next;
            }
            if (flag == 0)
            {
                cout << "Key not present";
            }
            else
            {
                cout << "key found";
            }
        }
    }
    void min()
    {
        int min = head->data;
        if (head == NULL)
        {
            cout << "List Empty";
        }
        else
        {
            getNode *ptr;
            ptr = head;
            while (ptr != NULL)
            {
                if (ptr->data < min)
                {
                    min = ptr->data;
                }
                ptr = ptr->next;
            }
        }
        cout << "Minimum Element is :" << min;
    }
    void max(){
        int max = head->data;
        if (head == NULL)
        {
            cout << "List Empty";
        }
        else
        {
            getNode *ptr;
            ptr = head;
            while (ptr != NULL)
            {
                if (ptr->data > max)
                {
                    max = ptr->data;
                }
                ptr = ptr->next;
            }
        }
        cout << "Maximum Element is :" << max;

    }
    void length()
    {

        int count = 0;

        if (head == NULL)
        {
            cout << "List Empty";
        }
        else
        {
            getNode *ptr;
            ptr = head;
            while (ptr != NULL)
            {
                count++;
                ptr = ptr->next;
            }
            cout << "Length Of Linked List is :" << count;
        }
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
             << "2. Add At Beginning" << endl
             << "3. Add At specify Location" << endl
             << "4. Add At end" << endl
             << "5. Add after a key" << endl
             << "6. Display" << endl
             << "7. Search" << endl
             << "8. Length" << endl
             << "9. Minimum Element" << endl
             << "10.Maximum Element"<<endl
             << "0. Exit";
        cin >> n;
        switch (n)
        {
        case 1:
            obj.append();
            break;
        case 2:
            obj.begin();
            break;
        case 3:
            obj.location();
            break;
        case 4:
            obj.end();
            break;
        case 5:
            obj.keyPos();
            break;
        case 6:
            obj.display();
            break;
        case 7:
            obj.search();
            break;
        case 8:
            obj.length();
            break;
        case 9:
            obj.min();
            break;
        case 10:
            obj.max();
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
