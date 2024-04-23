#include <iostream>

using namespace std;

int buscaBinaria(const int A[], int esquerda, int direita, int X) {
    if (esquerda > direita)
        return -1;
    
    int meio = esquerda + (direita - esquerda) / 2;
    
    if (A[meio] == X)
        return meio;
    
    if (A[meio] < X)
        return buscaBinaria(A, meio + 1, direita, X);
    else
        return buscaBinaria(A, esquerda, meio - 1, X); 
}

int main() {
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = sizeof(A) / sizeof(A[0]);
    
    int X;
    
    cout << "Digite o valor que deseja buscar: ";
    cin >> X;
    
    int indice = buscaBinaria(A, 0, tamanho - 1, X);
    
    if (indice != -1)
        cout << "O elemento " << X << " foi encontrado no índice " << indice << endl;
    else
        cout << "O elemento " << X << " não foi encontrado." << endl;
    
    return 0;
}