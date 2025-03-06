// seznam mora biti nujno urejen
sort(arr, arr+n);

for (int i = 0; i < q; i++) {
    int k;
    scanf("%d", &k);

    // Funkciji lower_bound podamo kazalec na začetek seznama,
    // kazalec na mesto tik za koncem seznama in iskano število
    int *kazalec = lower_bound(arr, arr+n, k);

    // Ta korak sicer ni potreben, a je lažje razmišljati z
    // indeksi kot s kazalci.
    int idx = kazalec - arr;

    // arr[idx] je prvo število na seznamu, ki je večje ali enako
    // številu k; če je enako k, potem se ta pojavi, sicer pa se ne
    if (arr[idx] == k) printf("DA\n");
    else printf("NE\n");
}
