#include <iostream>
#include <fstream>
#include <vector>


int heat_conduction_1D(int iterations, const std::string& output_path) {
    std::ofstream file(output_path);
    if (!file) {
        std::cerr << "Error opening the file!\n";
        return 1;
    }

    std::vector<double> temperatures(50, 20.0);
    temperatures[0] = 100.0;

    std::vector<double> new_T = temperatures;

    for(int i = 0; i < iterations; i++){
        file << "Step: " << i << "\n";

        // Output before update
        for (double t : temperatures) {
            file << t << "  ";
        }
        file << "\n";

        // Calculate new T values
        for (int j = 1; j < temperatures.size() - 1; j++){
            new_T[j] = 0.5 * (temperatures[j-1] + temperatures[j+1]);
        }
        
        // Keep boundary points fixed (optional)
        // new_T[0] = temperatures[0];
        // new_T[9] = temperatures[9];

        // Update for next iteratio
        temperatures = new_T;
    }

    file.close();
    return 0;
}


int main() {
    heat_conduction_1D(100, "outputs/raw/simulation_1D.txt");
    return 0;
}
