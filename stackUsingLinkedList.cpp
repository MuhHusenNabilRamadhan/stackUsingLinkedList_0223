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

        void pop() //prosedur perbaiki fungsi pop dalam stack
        {
            if (isEmpty())
            {
                cout << " Stack is Empty " << endl;
            }

            cout << " Pooped Value : " << top->data << endl;
            top = top->next;
        }

        void peek() //perbaiki fungsi peek agar tampilkan nilai teratas
        {
            if(top == NULL)
            {
                cout << "List is Empty. " << endl;
            }

            else //tamplkan nilai dari atas ke bawah
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

        bool isEmpty() // memperbaiki agar fungsi pop diatas tidak eror
        {
            return top = NULL;
        }
};

int main()
{
    Stack stact;

    int choice = 0;
    int value;

    while (choice != 5) //menjalankan program
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) //perbaiki kontrol yang tidak valid
        {
        case 1  :
            cout << "Enter the value to push : ";
            cin >> value;
            stact.push(value);
            break;
        case 2 :
            if (!stact.isEmpty())
            {
                stact.pop();
            }
            else
            {
                cout << "Stact is Empty. Cannot pop. " 
                    << endl;
            }
            break;
        case 3 :
            if(!stact.isEmpty())
            {
                stact.peek();
            }
            else
            {
                cout << "Stact is Empty. No top value."
                    << endl;
            }
            break;
        

        
        
            
        }
    }
}