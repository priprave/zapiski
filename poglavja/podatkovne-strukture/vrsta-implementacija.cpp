int *arr = nullptr;
int velikost = 0;
int kapaciteta = 0;
int zacetek = 0;

int prvi_element() {
    return arr[zacetek];
}

// V vrsto vedno dodajamo elemente na konec
void dodaj_element(int k) {
    if (velikost == kapaciteta) {
        int nova_kapaciteta = 2*kapaciteta;
        if (nova_kapaciteta == 0) nova_kapaciteta = 1;
        int *nov_arr = malloc(nova_kapaciteta * sizeof(int));

        // Prekopiramo seznam na novo lokacijo, pri čemer lahko
        // nastavimo nov začetek na 0
        for (int j = 0; j < velikost; j++) {
            nov_arr[j] = arr[(zacetek+j)%kapaciteta];
        }
        kapaciteta = nova_kapaciteta;
        zacetek = 0;

        if (arr != nullptr) free(arr);
        arr = nov_arr;
    }

    // Na kateri indeks dodamo element?
    int i = (zacetek + velikost) % kapaciteta;
    arr[i] = k;
    velikost++;
}

// Iz vrste vedno odstranimo prvi element
void odstrani_element() {
    zacetek++;
    velikost--;
}
