#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(const vector<int>& A, int N) {
    for (int i = 1; i < N; ++i) {
        if (A[i] < A[i - 1])
            return false;
    }
    return true;
}

int main() {
    
    int N;
    cout << "Digite o tamanho do vetor: ";
    cin >> N;

    cout << "Digite os elementos do vetor separados por espaço: ";
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    
    cout << "O vetor esta ordenado? " << (estaOrdenado(A, N) ? "Sim" : "Não") << endl;

    return 0;
}
