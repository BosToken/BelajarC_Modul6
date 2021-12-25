int SearchData()
{
    char search[100];

    FILE *Baca;
    Baca = fopen("./Data/Data.txt", "r");

    // if (Baca != NULL)
    // {
        printf("Anda Perlu Menginputkan NIM Untuk Dicari : ");
        scanf("%s", &search);
        while (!feof(Baca))
        {
            fscanf(Baca, "%[^+]+%[^+]+%[^+]+%[^+]+%[^+]+\n", nim, namaDepan, namaBelakang, kelas, dosen);
            if (strcmp(search, nim) == 0)
            {

                printf("\nNIM Mahasiswa : %s\n", nim);
                printf("Nama Mahasiswa : %s %s\n", namaDepan, namaBelakang);
                printf("Kelas Progdas : %s\n", kelas);
                printf("Nama Dosen Pengampu : %s\n\n", dosen);
                fclose(Baca);
                return 0;
            }
        }
        fclose(Baca);
        printf("Data Anda Tidak Ditemukan\n\n");
}