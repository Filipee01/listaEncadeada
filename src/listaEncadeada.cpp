#include "listaEncadeada.h"

//inicializando a lista
listaEncadeada::listaEncadeada() : tam(0), cabeca(nullptr){
    cout << "Lista criada" << endl;
}

//verifica se a lista está vazia
bool listaEncadeada::vazia(){
    return tam == 0;
}

//retorna o tamanho da lista
int listaEncadeada::get_tam(){
    return tam;
}  

// Adiciona um novo nó em uma posicao indicada
void listaEncadeada::add_no(int pos, int valor){

    //verifica se a posicao é valida
    if(pos < 1 || pos > tam + 1){
        return;
    }

    if(pos == 1){
        add_inicio(valor);
    }else if(pos == tam + 1){
        add_final(valor);
    }else {
        add_meio(pos, valor);
    }
    cout << "Valor " << valor << " adicionado na posicao " << pos << endl;
}

//inserir elemento na primeira posição
void listaEncadeada::add_inicio(int valor){
    no* n = new no(valor);
    n->set_prox(cabeca);
    cabeca = n;
    tam++;
}

//inserir o elemento no meio da lista

void listaEncadeada::add_meio(int pos, int valor){
    int i = 0;
    no* n = new no(valor);
    no* prox = cabeca;

    while( i + 2 < pos && prox != nullptr){
        i++;
        prox = prox -> get_prox();
    }

    if(prox != nullptr){
        n -> set_prox(prox->get_prox());
        prox -> set_prox(n);
        tam++;
    }
}

//inserir elemento na última posição
void listaEncadeada::add_final(int valor){
    no* n = new no(valor);
    no* aux = cabeca;

    while(aux -> get_prox() != nullptr){
        aux = aux -> get_prox();
    }

    aux -> set_prox(n);
    tam++;
}

//remove uma determinada posição

void listaEncadeada::remove_no(int pos){
    if(vazia() || pos < 1 || pos > tam){
        return;
    }

   no* ant = nullptr;
   no* prox = cabeca;
   int i = 0;
   while(prox != nullptr && i != pos - 1){
       ant = prox;
       prox = prox -> get_prox();
       i++;
   }
   //remove a posicao da lisa e desloca o espaco de memória daquela posicao
   if(ant == nullptr){
       cabeca = cabeca -> get_prox();
    }else {
        ant -> set_prox(prox -> get_prox());
    }
    delete prox;
    tam--;
}

// Altera o valor de uma determinada posição
void listaEncadeada::edit_no(int pos, int valor) {
    // Verifica se a posição é válida
    if (vazia() || pos < 1 || pos > tam) {
        return;
    }

    int i = 0;
    no* aux = cabeca;
    while (aux != nullptr && i != pos - 1) {
        aux = aux->get_prox();
        i++;
    }
    aux->set_valor(valor);
}

// Retorna o valor de uma determinada posição
int listaEncadeada::get_valor(int pos) {
    if (vazia() || pos < 1 || pos > tam) {
        return -1;
    }

    int i = 0;
    no* aux = cabeca;

    while (aux != nullptr && i != pos - 1) {
        aux = aux->get_prox();
        i++;
    }

    return aux->get_valor();
}

// Exibe a lista
void listaEncadeada::exibe_lista() {
    no* aux = cabeca;
    cout << "Lista: ";
    while (aux != nullptr) {
        std::cout << aux->get_valor() << " ";
        aux = aux->get_prox();
    }
    std::cout << std::endl;
}

// Desaloca toda a memória dos nós
listaEncadeada::~listaEncadeada() {
    // Desaloca o espaço de memória
    while (cabeca != nullptr) {
        no* d = cabeca;
        cabeca = cabeca->get_prox();
        delete d;
    }
    cout << "Memoria desalocada." << endl;
};