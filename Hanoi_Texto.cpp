#include <iostream>
using namespace std;
void TorresHanoi(int, int, int, int);
int main(){
    // Solicitar la cantidad de discos a mover
    int numdisc;
    cout << "Ingrese la cantidad de discos: ";
    cin >> numdisc;
    cout << "Aguja -> Aguja" << endl;
    TorresHanoi(numdisc, 1, 3, 2);
} // Fin Main

void TorresHanoi(int NumDiscos, int AgujaInicial, int AgujaTemporal, int AgujaDestino){
    if (NumDiscos == 1){
        // Caso Base
        cout << AgujaInicial << " -> " << AgujaTemporal << endl;
    } else {
        // Recursividad
        TorresHanoi(NumDiscos - 1, AgujaInicial, AgujaDestino, AgujaTemporal);
        cout << AgujaInicial << " -> " << AgujaTemporal << endl;
        TorresHanoi(NumDiscos - 1, AgujaDestino, AgujaTemporal, AgujaInicial);
    } // Fin If
} // Fin Torres de Hanoi