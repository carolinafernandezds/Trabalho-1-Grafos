#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Declaração de variáveis globais
extern int n, numero, opcao;
extern vector <int> grau, caminho, pai, niveis, vertices_componente, componente_auxiliar1, componente_auxiliar2, distancia_auxiliar;
extern int **matriz;
extern vector<vector <int> > lista, componentes;

// Funções

// Função para verificar a utilização de memória
void memoria_utilizada();

// Função para inicializar a matriz de adjacência
void constroi_matriz(string nome_arquivo);

// Função para inicializar a lista de adjacência
void constroi_lista(string nome_arquivo);

// Função para inicializar o grafo (0 para matriz e 1 para lista)
void constroi_grafo(int opcao1, string nome_arquivo);

// Função para executar o BFS a partir de um vértice
void BFS(int vertice);

// Função para executar o DFS a partir de um vértice
void DFS(int vertice);

// Função para gerar um arquivo de saída contendo a árvore gerada (pai e nível de cada vértice)
void constroi_arvore(string arquivo_saida);

// Função auxiliar para encontrar componentes conexas
void componentes_conexas_auxiliar();

// Função para determinar as componentes conexas do grafo
void componentes_conexas();

// Função para determinar a distância entre dois vértices
void distancia(int inicial, int final);

// Função para calcular uma aproximação do diâmetro do grafo
void diametro();

// Função para gerar um arquivo de saída com informações sobre o grau do grafo e componentes conexas
void saida(string arquivo_saida);

#endif 
