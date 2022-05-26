#ifndef KOMPUTER_H
#define KOMPUTER_H

#include <stdbool.h>

#define MAX_LEN 50

typedef struct Komputer
{
    char nazwa[MAX_LEN - 1];
    double cena;
    int ileMaLat;
    bool czyLaptop;

} Komputer;

// Tworzy struktur� Komputer
Komputer makeKomputer(const char *nazwa, double cena, int ileMaLat, bool czyLaptop);

// Tworzy kopi� komputera
Komputer makeKomputerCopy(const Komputer *komp);

// Postarza dany komputer o zadan� liczb� lat
void postarz(Komputer *komp, int lata);

// Wy�wietla dane komputera
void show(const Komputer *komp);

#endif
