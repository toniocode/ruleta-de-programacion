// Mostrar todos los números que faltan en un array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numerosFaltantes(vector<int> nums) {
    if (nums.empty()) return {};

    int minimo = *min_element(nums.begin(), nums.end());
    int maximo = *max_element(nums.begin(), nums.end());

    vector<int> faltantes;

    for (int i = minimo; i <= maximo; i++) {
        if (find(nums.begin(), nums.end(), i) == nums.end()) {
            faltantes.push_back(i);
        }
    }

    return faltantes;
}

int main() {
    vector<int> arr = {4, -3, 7, 5, 10};
    vector<int> faltantes = numerosFaltantes(arr);

    cout << "Números faltantes: ";
    for (int num : faltantes) {
        cout << num << " ";
    }

    return 0;
}