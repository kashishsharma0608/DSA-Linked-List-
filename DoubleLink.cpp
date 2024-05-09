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
};
int main()
{
    doubleLink obj;
    int n;
    while (1)
    {
        cout << "\nEnter Your Choice:" << endl;
        cout << "1.Append" << endl
             << "2.Display" << endl
             << "0 Exit";
        cin >> n;
        switch (n)
        {
        case 1:
            obj.append();
            break;
        case 2:
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