#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<char> vector1;
    vector<char> vector2;
    vector<char> union_vector;
    vector<char> intersection_vector;

    // Pedimos al usuario que ingrese los elementos del primer vector
    cout << "Ingrese los elementos del primer vector (termina con un espacio):" << endl;
    char c;
    for(int j=0; j<10; j++) {
        vector1.push_back(c);
    }

    // Pedimos al usuario que ingrese los elementos del segundo vector
    cout << "Ingrese los elementos del segundo vector (termina con un espacio):" << endl;
    while (cin >> c && c != ' ') {
        vector2.push_back(c);
    }

    // Realizamos la unión de los dos vectores
    union_vector = vector1;
    union_vector.insert(union_vector.end(), vector2.begin(), vector2.end());

    // Realizamos la intersección de los dos vectores
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    set_intersection(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), back_inserter(intersection_vector));

    // Mostramos los resultados por pantalla
    cout << "La unión de los dos vectores es: ";
    for (int i=0; i<10; i++) {
        cout << c << " ";
    }
    cout << endl;

    cout << "La intersección de los dos vectores es: ";
    for (int i=0; i<10; i++) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
