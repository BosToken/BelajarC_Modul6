int createData()
{
    int q, p;
    char duplikat[100];

    // Memanggil Untuk Create
    FILE *Masuk;
    Masuk = fopen("./Data/Data.txt", "a");

    // Memanggil Untuk Read
    FILE *Baca;
    Baca = fopen("./Data/Data.txt", "r");

    // printf("Data Ke-%i\n", i + 1);
    printf("Masukan NIM Mahasiswa : ");
    scanf("%s", &nim);
    // printf("test %s", nim);
    strupr(nim);

    // Char Checking
    if ((int)nim[0] > 64 && (int)nim[1] > 64)
    {
        for (q = 2; q < strlen(nim); q++)
        {
            
            // if ((int)nim[q] < 47 && (int)nim[q] > 58)
            if((int)nim[q] > 47)
            {
                if ((int)nim[q] <= 58)
                {
                }
                else{
                    printf("Ada Karakter Dalam Inputan Anda, Karakter Ke-%i\n\n", q);
                    return 0;
                }
                
            }
            else
            {
                printf("Ada Karakter Dalam Inputan Anda, Karakter Ke-%i\n\n", q);
                return 0;
            }
        }
    }
    else
    {
        printf("\nDua Karakter NIM Harus Diawali Dengan A-Z\n");
        return 0;
    }

    // Duplikat Checking

    while (!feof(Baca))
    {
        fscanf(Baca, "%[^+]+%*[^+]+%*[^+]+%*[^+]+%*[^+]+\n", duplikat);
        if (strcmp(duplikat, nim) == 0)
        {
            printf("Nim Yang Anda Input Sudah Digunakan\n\n");
            return 0;
        }
    }

    printf("Masukan Nama Depan Mahasiswa : ");
    scanf(" %[^\n]s", &namaDepan);
    printf("Masukan Nama Belakang Mahasiswa : ");
    scanf(" %[^\n]s", &namaBelakang);
    printf("Masukan Kelas Pemrograman : ");
    scanf(" %[^\n]s", &kelas);
    strupr(kelas);
    printf("Masukan Nama Dosen Pengampu : ");
    scanf(" %[^\n]s", &dosen);

    printf("Data Berhasil Ditambah\n\n");
    fprintf(Masuk, "\n%s+%s+%s+%s+%s+", nim, namaDepan, namaBelakang, kelas, dosen);
    fclose(Masuk);
}