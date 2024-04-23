#include <iostream>

using namespace std;

int buscaBinaria(const int A[], int tamanho, int X) {
    int esquerda = 0;
    int direita = tamanho - 1;
    
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        if (A[meio] == X)
            return meio;
        
        if (A[meio] < X)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    
    return -1;
}

int main() {
    int A[] = {1, 3, 5, 7, 9, 11, 13, 18};
    int tamanho = sizeof(A) / sizeof(A[0]);
    
    int X;
    
    cout << "Digite o valor que deseja buscar: ";
    cin >> X;
    
    int indice = buscaBinaria(A, tamanho, X);
    
    if (indice != -1)
        cout << "O elemento " << X << " foi encontrado no índice " << indice << endl;
    else
        cout << "O elemento " << X << " não foi encontrado." << endl;
    
    return 0;
}
