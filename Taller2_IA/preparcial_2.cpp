#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para verificar si un número es primo
bool isPrimo(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

// Función para verificar si un número es par
bool isPar(int x) {
    return x % 2 == 0;
}

// Función para generar la duración de una canción en segundos
int generarCancion(int maxMinutos) {
    return rand() % (maxMinutos * 60) + 1;
}

// Función para generar el ID del artista
int generarArtista(int tipo) {
    int id;
    
    if (tipo == 0) { // Es primo
        do {
            id = rand() % 1000 + 1;
        } while (!isPrimo(id));
    } else if (tipo == 1) { // Es impar
        do {
            id = rand() % 1000 + 1;
        } while (isPar(id));
    } else { // Es par
        do {
            id = rand() % 1000 + 1;
        } while (!isPar(id));
    }

    return id;
}

// Función para convertir segundos a formato mm:ss
void conv_seg_a_minutos(int segs, int &min, int &seg) {
    min = segs / 60;
    seg = segs % 60;
}

// Función para imprimir el disco
void printDisco(int canciones[], int artistas[], int numCanciones) {
    int totalSegundos = 0;
    for (int i = 0; i < numCanciones; i++) {
        int min, seg;
        conv_seg_a_minutos(canciones[i], min, seg);
        cout << "Canción " << i + 1 << ". " << artistas[i] << ", " 
            << min << ":" << (seg < 10 ? "0" : "") << seg << endl;
        totalSegundos += canciones[i];
    }
    
    int totalMin, totalSeg;
    conv_seg_a_minutos(totalSegundos, totalMin, totalSeg);
    cout << "Duración total del disco: " << totalMin << ":" << (totalSeg < 10 ? "0" : "") << totalSeg << endl;
}

// Función para calcular el promedio de las canciones
int promedio(int canciones[], int numCanciones) {
    int suma = 0;
    for (int i = 0; i < numCanciones; i++) {
        suma += canciones[i];
    }
    return suma / numCanciones;
}

int main() {
    srand(time(0));  // Semilla para números aleatorios

    int id;
    cout << "Ingrese el id del disco: ";
    cin >> id;

    int numCanciones;
    int tipoArtista;
    int maxDuracion;

    if (isPrimo(id)) {
        cout << id << " es primo" << endl;
        numCanciones = 13;
        tipoArtista = 0;
        maxDuracion = 11;  // Duración máxima de 11 minutos
    } else {
        if (isPar(id)) {
            cout << id << " es par" << endl;
            numCanciones = 10;
            tipoArtista = 2;
            maxDuracion = 4;  // Duración máxima de 4 minutos
        } else {
            cout << id << " es impar" << endl;
            numCanciones = 7;
            tipoArtista = 1;
            maxDuracion = 7;  // Duración máxima de 7 minutos
        }
    }

    int canciones[numCanciones];  // Lista de canciones
    int artistas[numCanciones];   // Lista de artistas

    for (int i = 0; i < numCanciones; i++) {
        canciones[i] = generarCancion(maxDuracion);  // Generar duración de canción
        artistas[i] = generarArtista(tipoArtista);   // Generar ID de artista
    }

    printDisco(canciones, artistas, numCanciones);  // Imprimir detalles del disco
    
    int promedioCanciones = promedio(canciones, numCanciones);
    int promMin, promSeg;
    conv_seg_a_minutos(promedioCanciones, promMin, promSeg);
    cout << "Promedio: " << promMin << ":" << (promSeg < 10 ? "0" : "") << promSeg << endl;

    return 0;
}

