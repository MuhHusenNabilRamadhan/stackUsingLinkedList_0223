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

};