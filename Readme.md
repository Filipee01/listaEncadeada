# Lista Encadeada

Lista encadeada simples em C++

## Estrutura do Projeto

O projeto está organizado da seguinte forma:

listaEncadeada/ 
    |-- include/ 
        ├── listaEncadeada.h  |── no.h
    ├── src/ │ ├── listaEncadeada.cpp │ main.cpp | no.cpp 
    ├── Readme
    ├── Makefile

## Funcionalidades

1. Criar uma lista.
2. Verificar se a lista está vazia.
3. Obter o tamanho atual da lista.
4. Receber o valor de uma posição específica.
5. Alterar o valor de uma posição específica.
6. Inserir um valor em uma posição específica.
7. Remover um valor de uma posição específica.
8. Exibir todos os elementos da lista.

## Compilar

`compile usando`:

make

`Execute o comando`:

.\build\iniciar.exe

## Exemplo de Uso

## Saída com caso teste no arquivo main
````
Lista criada         
Lista vazia? Sim
Valor 5 adicionado na posicao 1
Lista: 5 
Valor 8 adicionado na posicao 1
Lista: 8 5 
Valor 12 adicionado na posicao 2
Lista: 8 12 5 
Editando o valor da posicao 1
Lista: 4 12 5 
lista vazia? Nao
Removendo o elemento da segunda posicao:
Lista: 4 5 
Valor na posicao 2: 5
Tamanho da listaa: 2
Memoria desalocada.
