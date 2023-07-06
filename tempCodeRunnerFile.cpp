
#include <iostream>
using namespace std;

class trienode
{
public:
    trienode *child[26];
    bool is;
    trienode()
    {
        this->is = false;
        for (int i = 0; i < 26; i++)
        {
            this->child[i] = NULL;
        }
    }
};

void insert(trienode *node, string word)
{
    if (word.length() == 0)
    {
        node->is = true;
        return;
    }
    int index = word[0] - 'a';
    trienode *pointer;
    if (node->child[index] != NULL)
    {
        pointer = node->child[index];
    }
    else
    {
        pointer = new trienode();
        node->child[index] = pointer;
    }
    insert(pointer, word.substr(1));
}

bool found(trienode *node, string word)
{
    if ((word.length()) == 0)
        return node->is;
    int index = word[0] - 'a';
    trienode *child;
    if (node->child[index] != NULL)
    {
        child = node->child[index];
    }
    else
        return false;

    return found(child, word.substr(1));
}

int main(int argc, char const *argv[])
{
    trienode *node = new trienode();
    insert(node, "zebra");
    insert(node, "dog");
    insert(node, "duck");
    insert(node, "dove");

    return 0;
}
