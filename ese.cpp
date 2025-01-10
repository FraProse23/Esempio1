#include <iostream>
#include <vector>
#include <algorithm> // Per la funzione std::sort

int main() {
    std::vector<int> numeri(5); // Vettore per contenere 5 numeri

    std::cout << "Inserisci 5 numeri:\n";

    // Lettura dei numeri dall'utente
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeri[i];
    }

    // Ordinamento in ordine crescente
    std::sort(numeri.begin(), numeri.end());

    // Stampa dei numeri ordinati
    std::cout << "\nNumeri in ordine crescente:\n";
    for (const auto& num : numeri) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
