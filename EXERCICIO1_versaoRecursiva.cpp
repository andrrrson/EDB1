#include <iostream>
#include <vector>

using namespace std;

int buscaSequencialRecursiva(vector<int> &A, int X, int indice) {
    if (indice == A.size()) 
        return -1;
    
    if (A[indice] == X) 
        return indice;

    return buscaSequencialRecursiva(A, X, indice + 1); 
}

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vector<int> vetor(tamanho);

    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < tamanho; ++i)
        cin >> vetor[i];

    int elemento;
    cout << "Digite o elemento a ser procurado: ";
    cin >> elemento;
    
    int resultado = buscaSequencialRecursiva(vetor, elemento, 0);
    
    if (resultado != -1)
        cout << "Elemento encontrado no indice " << resultado << endl;
    else
        cout << "Elemento nao encontrado." << endl;
    
    return 0;
}

