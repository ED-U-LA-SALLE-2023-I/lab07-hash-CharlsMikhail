struct HashTable
{
    int cantidadDeBuckets;
    void (*funciónHash)(int tamanioTabla, int rango);
};


void init(struct HashTable* self, void (*funcionHash)(), int _cantidadDeBuckets) {
    self->cantidadDeBuckets = _cantidadDeBuckets;
}

void insert(struct HashTable self, int elemento) {

}
