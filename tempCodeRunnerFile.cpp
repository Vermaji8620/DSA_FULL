#include <iostream>
using namespace std;

class llist
{
public:
    int data;
    llist *next = NULL;

    llist(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertnode(llist *&fcopy, int dataa)
{
    llist *ptr = new llist(dataa);
    ptr->next = fcopy;
    fcopy = ptr;
}

void printallnode(llist *fcopy)
{
    llist *ff = fcopy;
    while (ff != NULL)
    {
        cout << ff->data << " ";
        ff = ff->next;
    }
}

void removeduplicatesinsortedlist(llist *&fcopy)
{
    llist *first = fcopy;
    llist *second = fcopy;
    while (first->next != NULL)
    {
        first = first->next;
        if ((first->data) != (second->data))
        {
            second = first;
        }
        else
        {
            llist *third = first;
            second->next = third->next;
            first = second;
            delete[] third;
        }
    }
}

int main()
{
    llist *first = new llist(4);
    llist *firstcopy = first;
    insertnode(firstcopy, 3);
    insertnode(firstcopy, 3);
    insertnode(firstcopy, 3);
    insertnode(firstcopy, 3);
    insertnode(firstcopy, 2);
    insertnode(firstcopy, 2);
    insertnode(firstcopy, 1);
    printallnode(firstcopy);
    cout << endl;
    // printallnode(reversellist(firstcopy));
    removeduplicatesinsortedlist(firstcopy);
    printallnode(firstcopy);
    return 0;
}
