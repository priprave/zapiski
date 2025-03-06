// dan imamo seznam arr dolžine n
// seznam prvo uredimo
sort(arr, arr+n);

// iz standardnega vhoda q-krat preberemo iskano število k,
// ter izpišemo "DA", če je število v seznamu, in "NE", če števila
// ni v seznamu
for (int i = 0; i < q; i++) {
    int k;
    scanf("%d", &k);

    // hranimo si dva indeksa; levi in desni rob podseznama, na katerem
    // smo prepričani, da se število k nahaja (če se sploh nahaja na
    // seznamu). Na začetku nimamo nobenih informacij, zato nastavimo
    // levi rob na 0 in desni rob na n-1.
    int levo = 0;
    int desno = n-1;

    bool nasel = false;
    while (levo <= desno) {
        // Izračunamo indeks srednjega elementa na trenutnem podseznamu
        // in preverimo, če je večji ali manjši od k
        int sredina = (levo + desno) / 2;
        if (arr[sredina] == k) {
            // Našli smo k! Iskanje lahko takoj zaključimo.
            nasel = true;
            break;
        }
        // Posodobimo eno od mej podseznama glede na vrednost
        // arr[sredina]
        if (arr[sredina] > k) desno = sredina-1;
        else levo = sredina+1;
    }

    if (nasel) printf("DA\n");
    else printf("NE\n");
}
