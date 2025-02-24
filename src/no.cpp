#include "no.h"

no::no(int v) : valor(v), prox(nullptr) {}

void no::set_prox(no* n) {
    prox = n;
}

no* no::get_prox() {
    return prox;
}

void no::set_valor(int v) {
    valor = v;
}

int no::get_valor() {
    return valor;
}