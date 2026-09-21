#include <iostream>
using namespace std;

int main() {
    string teatypes[3] = {"green tea", "black tea", "lemon tea"};

    for (int i = 0; i < 3; i++) {
        cout << "Brewing " << teatypes[i] << "...." << endl;

        for (int j = 1; j <= 3; j++) {
            cout << "Brewing " << j << " cup of "
                 << teatypes[i] << endl;
        }
    }

    return 0;
}