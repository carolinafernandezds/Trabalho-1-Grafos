#include "grafo.h"
#include <random>

int main (){

    //Item 1
    constroi_grafo(1, "grafo_1.txt"); //Memória consumida é fornecida
   
   //Itens 2 e 3
   constroi_grafo(1, "grafo_5.txt");
   for (int i = 0; i < 100; i++){
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution <> dis(1, n); 
   int escolha = dis(gen);          //Escolhe vértice aleatório
   clock_t start = clock();
   DFS(escolha);            //Muda entre BFS e DFS 
   clock_t end = clock();
   cout <<  double(end - start) / CLOCKS_PER_SEC << endl;  // Retorna o tempo em segundos
   }

    //Item 4
    constroi_grafo(1, "grafo_1.txt"); 
    for (int i = 1; i < 4; i++){
        BFS(i);                     //Muda entre BFS e DFS.
        cout << pai[9] << endl;
        cout << pai[19] << endl;
        cout << pai[29] << endl;
    }

    //Item 5
    constroi_grafo(1, "grafo_5.txt");
    BFS(1); 
    distancia(10,20);
    distancia(20,30);   //Distâncias requeridas
    distancia(10,30);

    //Item 6
    constroi_grafo(1, "grafo_5.txt");
    saida("saida_grafo"); //Mostra as componentes conexas com tamanho

    //Item 7
    constroi_grafo(1, "grafo_5.txt");
    diametro(); //Determina o diâmetro

    //OBSERVAÇÃO: Cada trecho foi executado individualmente, de modo a observar cada reultado.

}