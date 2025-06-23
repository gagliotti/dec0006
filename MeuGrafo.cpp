#include "MeuGrafo.h"
// MeuGrafo

#include <cstddef>
// std::size_t
#include <iterator>
// std::empty
// std::size
#include <queue>
// std::priority_queue
#include <functional>
#include <utility>
#include <vector>
// std::vector
#include "excecoes.h"
// ExcecaoMatrizAdjacenciaVazia
// ExcecaoMatrizAdjacenciaNaoQuadrada
// ExcecaoCustoNegativo
// ExcecaoVerticeComLaco
// ExcecaoVerticeInvalido


//implente aqui
MeuGrafo::MeuGrafo(MatrizAdjacencia const& matrizAdjacencia):GrafoAbstrato(matrizAdjacencia){
    // escreva o algoritmo esperado
}

std::size_t MeuGrafo::quantidadeVertices()const{
    // substitua a linha abaixo pelo algoritmo esperado
    return 0;
};


std::size_t MeuGrafo::quantidadeArestas(std::size_t vertice)const{
    // substitua a linha abaixo pelo algoritmo esperado
    return 0;
};


std::size_t MeuGrafo::quantidadeArestas() const{
    // substitua a linha abaixo pelo algoritmo esperado
    return 0;
};

double MeuGrafo::custo(std::size_t origem, std::size_t destino)const{
    // substitua a linha abaixo pelo algoritmo esperado
    return 0;
};


std::vector<double> MeuGrafo::menoresDistancias(std::size_t origem)const{
    // substitua a linha abaixo pelo algoritmo esperado
    return {0.0};
}


























