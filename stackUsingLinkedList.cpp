#include <iostream>
using namespace std;

class Node // nama kelas
{
    public: // akses modifier
        int data; // bil. bulat
        Node *next;

        Node()
        {

            next = NULL;
        }
};

class Stack // nama kelas
{
    private: // akses modifier
        Node *top;

    public: // akses modifier
        Stack()
        {

            top = NULL;
        }
        
         int push (int value)
        {
            Node *newNode = new Node();
            newNode-> data = value;
            newNode->next = top;
            top = newNode;
            cout << " Push Value : " << value << endl;
            return value;
        }
};