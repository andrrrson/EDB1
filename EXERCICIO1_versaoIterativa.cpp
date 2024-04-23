#include <iostream>
#include <vector>

using namespace std;

int buscaSequencialIterativa(vector<int> &A, int X) {
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == X) 
            return i;
    }
    return -1;
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
    
    int resultado = buscaSequencialIterativa(vetor, elemento);
    
    if (resultado != -1)
        cout << "Elemento encontrado no indice " << resultado << endl;
    else
        cout << "Elemento nao encontrado." << endl;
    
    return 0;
}

