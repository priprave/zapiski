// V spremenljivki arr hranimo elemente seznama (in nekaj praznega
// prostora), v spremenljivki velikost pa število teh elementov.
// Začnemo s praznim seznamom
int arr[1000];
int velikost = 0;

// Funkcija doda element k na i-to mesto našega seznama
void dodaj_element(int k, int i) {
    // Zapisati želimo arr[i] = k, a tega še ne smemo narediti,
    // ker bomo s tem prepisali element, ki je tam trenutno shranjen.
    // Zato moramo prvo prekopirati vse elemente na eno mesto desno.
    for (int j = velikost; j > i; j--) {
        arr[j] = arr[j-1];
    }
    arr[i] = k;
    velikost++;  // dodali smo element, zato je naš seznam za 1 daljši
}

// Funkcija odstrani element na indeksu i iz našega seznama
void odstrani_element(int i) {
    // Če želimo odstraniti i-ti element, moramo poskrbeti, da bodo
    // vsi kasnejši elementi na pravem mestu, torej da bo prvi "prazen"
    // prostor na mestu arr[velikost], in ne prej
    for (int j = i; j < velikost; j++) {
        arr[j] = arr[j+1];
    }
    velikost--;
}
