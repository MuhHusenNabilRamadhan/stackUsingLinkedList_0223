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

        void pop()
        {
            if (isEmpty())
            {
                cout << " Stack is Empty " << endl;
            }

            cout << " Pooped Value : " << top->data << endl;
            top = top->next;
        }

        void peek()
        {
            if(top == NULL)
            {
                cout << "List is Empty. " << endl;
            }
            
            else
            {
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current = current->next;
                }
                cout << endl;

            }
        }

    
};