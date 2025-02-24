#ifndef listaEncadeada_H
#define listaEncadeada_H

#include <no.h>

using namespace std;

class listaEncadeada {
    int tam; //tamanho da lista
    no* cabeca; //aponta para o primeiro nó da lista
    
    //funcões para adicionar um nó no inicio, no meio e no final
    void add_inicio(int valor);
    void add_meio(int pos, int valor);
    void add_final(int valor);

public:
    listaEncadeada(); //construtor de lista

    bool vazia(); //verifica se a lista está vazia

    int get_tam(); //retorna o tamanho da lista

    void add_no(int pos, int valor); //adiciona um novo nó na lista

    void remove_no(int pos); //remove um nó da lista

    int get_valor(int pos); //retorna o valor de um nó da lista

    void edit_no(int pos, int valor); //edita/altera o valor de um nó da lista

    void exibe_lista(); //exibe a lista

    ~listaEncadeada(); //destrutor de lista
};

#endif // listaEncadeada_H  