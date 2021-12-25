int updateData()
{
    char search[100];

    FILE * Baca;
    FILE * Update;
    Baca = fopen("./Data/Data.txt", "r");
    Update = fopen("./Data/switch.txt", "w");


    printf("Anda Perlu Masukan NIM untuk Mengubah Data : ");
    scanf("%s", &search);

    while (!feof(Baca))
    {
        fscanf(Baca, "%[^+]+%[^+]+%[^+]+%[^+]+%[^+]+\n", nim, namaDepan, namaBelakang, kelas, dosen);
        if (strcmp(nim, search) == 0)
        {
            printf("Ubah Nama Depan Mahasiswa : ");
            scanf(" %[^\n]s", &namaDepan);
            printf("Ubah Nama Belakang Mahasiswa : ");
            scanf(" %[^\n]s", &namaBelakang);
            printf("Ubah Kelas Pemrogdas : ");
            scanf(" %[^\n]s", &kelas);
            strupr(kelas);
            printf("Ubah Nama Dosen Pengampu : ");
            scanf(" %[^\n]s", &dosen);
            fprintf(Update, "\n%s+%s+%s+%s+%s+", nim, namaDepan, namaBelakang, kelas, dosen);
        }
        else
        {
            fprintf(Update, "\n%s+%s+%s+%s+%s+", nim, namaDepan, namaBelakang, kelas, dosen);
        }
    }
    fclose(Baca);
    fclose(Update);
    remove("./Data/Data.txt");
    rename("./Data/switch.txt", "./Data/Data.txt");

}