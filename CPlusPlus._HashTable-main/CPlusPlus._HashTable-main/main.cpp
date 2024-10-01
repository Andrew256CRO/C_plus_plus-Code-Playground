#include <iostream>
#include <cstring>
#define M 19
#include <fstream>
using namespace std;

ifstream fin("dictionar.txt");

struct node {
    char info[30];
    node* next;
};

int getHashKey(char cuvant[30])
{
    int result = 0;
    for (int i = 0; i < strlen(cuvant); i++)
    {
        result += cuvant[i];
        result %= M;
    }
    return result;
}

void insert(node*& lista, char cuvant[30])
{
    if (lista == NULL)
    {
        lista = new node;
        strcpy(lista->info, cuvant);
        lista->next = NULL;
    }
    else
    {
        node* p = lista;
        while (p->next != NULL) p = p->next;
        node* q = new node;
        strcpy(q->info, cuvant);
        p->next = q;
        q->next = NULL;
    }
}

bool findAlready(node*& lista, char cuvant[30])
{
    node* p = lista;
    while (p)
    {
        if (strcmp(p->info, cuvant) == 0) return 1;
        p = p->next;
    }
    return 0;
}

void afisareLista(node* lista)
{
    node* p = lista;
    while (p)
    {
        cout << p->info << ' ';
        p = p->next;
    }
    cout << '\n';
}

int main()
{
    node* table[20];
    for (int index = 0; index < M; index++) table[index] = 0;

    char cuvant[30];

    while (fin >> cuvant)
    {
        int hashKey = getHashKey(cuvant);
        if (!findAlready(table[hashKey], cuvant)) insert(table[hashKey], cuvant);
    }

    for (int index = 0; index < M; index++)
    {
        cout << index << " : ";
        afisareLista(table[index]);
        cout << '\n';
    }

    return 0;
}
