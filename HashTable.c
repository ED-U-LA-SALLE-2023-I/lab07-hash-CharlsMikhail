#include <stdio.h>
#include <stdlib.h>

struct HashTable
{
    int h;
    int n;
    int** buckets;
};

void init(void (int n, int h);
void insert(HashTable* table, int x);
void delete(HashTable* table, int x);
int find(HashTable* table, int x);


int main() {

    return 0;
}