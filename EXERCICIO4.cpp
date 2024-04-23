#include <iostream>

int fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n == 0)
        return a;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N;
    std::cout << "Digite o valor de N: ";
    std::cin >> N;
    
    int resultado = fibonacci(N);
    std::cout << "O valor na posição " << N << " da sequência de Fibonacci é: " << resultado << std::endl;

    return 0;
}
