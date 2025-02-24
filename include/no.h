#ifndef NO_H
#define NO_H

#include <iostream>

using namespace std;

class no {
    int valor; //valor dentro do no que está armazenado
    no* prox; //aponta para o prox nó ou para NULL se for o último nó

public:
    no(int v = 0); // construtor de nó

    //get e set de prox
    void set_prox(no* n);
    no* get_prox();

    //get e set de valor
    void set_valor(int v);
    int get_valor();
};

#endif // NO_H