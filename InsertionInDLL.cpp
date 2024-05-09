#include <iostream>
using namespace std;
class doubleLink
{
    class getNode
    {
    public:
        getNode *left;
        int data;
        getNode *right;
        getNode()
        {
            left = NULL;
            right = NULL;
        }
    };

public:
    getNode *head = NULL;
    void append()
    {
        int data;
        cout << "\nEnter Data:";
        cin >> data;
        getNode *newNode = new getNode();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
            cout << "\nNew Node is added";
        }
        else
        {
            getNode *ptr;
            ptr = head;
            while (ptr->right != NULL)
            {
                ptr = ptr->right;
            }
            ptr->right = newNode;
            newNode->left = ptr;
            cout << "\nNew Node is added";
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
            newNode->right = ptr;
            ptr->left = newNode;
            head = newNode;
            cout << "New Node is added" << endl;
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
            while (ptr->right != NULL)
            {
                ptr = ptr->right;
            }
            ptr->right = newNode;
            newNode->left = ptr;
            cout << "New Node is added" << endl;
        }
    }
    void keyPos()
    {
        int key, data;
        cout << "enter key:" << endl;
        cin >> key;
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
            while (ptr->right != NULL)
            {
                if (ptr->data == key)
                    break;

                ptr = ptr->right;
            }
            if (ptr->right == NULL)
            {
                cout << "Key not present";
            }
            else
            {
                cur = ptr->right;
                ptr->right = newNode;
                newNode->right = cur;
                newNode->left = ptr;
                cur->left = newNode;
            }
        }
    }
    void display()
    {
        getNode *ptr;
        ptr = head;
        cout << "NULL->";
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->right;
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
            while (ptr!= NULL)
            {
                if (ptr->data == key)
                {
                    flag++;
                    break;
                }
                ptr = ptr->right;
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
                ptr = ptr->right;
            }
            cout << "Length Of Linked List is :" << count;
        }
    }
};
int main()
{
    doubleLink obj;
    int n;
    while (1)
    {
        cout << "\nEnter Your Choice:" << endl;
        cout << "1.Append" << endl
             << "2.Beginning" << endl
             << "3.End" << endl
             << "4.Key Position" << endl
             << "5.Display" << endl
             << "6. Search" << endl
             << " 7. Count" << endl
             << "0 Exit";
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
            obj.end();
            break;
        case 4:
            obj.keyPos();
            break;
        case 5:
            obj.display();
            break;
        case 6:
            obj.search();
            break;
        case 7:
            obj.length();
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