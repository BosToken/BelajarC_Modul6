int readData()
{
    int penomeran = 1;
    // char nimRead['0'][100], namaRead['0'][100], namaDepanRead['0'][100], namaBelakangRead['0'][100], kelasRead['0'][100], dosenRead['0'][100];

    FILE *Baca;
    Baca = fopen("./Data/Data.txt", "r");

    while (!feof(Baca))
    {
        fscanf(Baca, "%[^+]+%[^+]+%[^+]+%[^+]+%[^+]+\n", nim, namaDepan, namaBelakang, kelas, dosen);
        printf("\nData Ke-%i\n", penomeran);

        printf("NIM Mahasiswa : %s\n", nim);
        printf("Nama Mahasiswa : %s %s\n", namaDepan, namaBelakang);
        printf("Kelas Progdas : %s\n", kelas);
        printf("Nama Dosen Pengampu : %s\n\n", dosen);

        penomeran++;
    }

    fclose(Baca);
}