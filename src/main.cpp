#include "listaEncadeada.h"

int main(void) {
    listaEncadeada lista;

    cout << "Lista vazia? " << (lista.vazia() ? "Sim":"Nao") << endl;

    lista.add_no(1,5);
    lista.exibe_lista();

    lista.add_no(1,8);
    lista.exibe_lista();
    
    lista.add_no(2,12);
    lista.exibe_lista();
    
    cout << "Editando o valor da posicao 1" << endl;
    lista.edit_no(1,4);
    lista.exibe_lista();

    cout << "lista vazia? " << (lista.vazia() ? "Sim":"Nao") << endl;

    cout << "Removendo o elemento da segunda posicao:" << endl;
    lista.remove_no(2);
    lista.exibe_lista();

    cout << "Valor na posicao 2: " << lista.get_valor(2) << endl;

    cout << "Tamanho da listaa: " << lista.get_tam() << endl;

    return 0;
}