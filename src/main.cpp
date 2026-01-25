#include <iostream>
#include <fstream>
#include <vector>


int main() {
    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "Error opening the file!\n";
        return 1;
    }

    std::vector<double> temperatures(10, 20.0); // 10 Elemente, alle = 20.0
    temperatures[9] = 100.0;

    for (double t : temperatures) {
        file << t << "\n";
        std::cout << t << std::endl;
    }

    file.close(); // Datei schließen
    return 0;
}
