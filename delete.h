int deleteData()
{
    char search[100], sure = "Y";

    FILE *Baca;
    FILE *Delete;
    Baca = fopen("./Data/Data.txt", "r");
    Delete = fopen("./Data/switch.txt", "w");

    printf("Anda Perlu Masukan NIM untuk Menghapus Data : ");
    scanf("%s", &search);

    while (!feof(Baca))
    {
        fscanf(Baca, "%[^+]+%[^+]+%[^+]+%[^+]+%[^+]+\n", nim, namaDepan, namaBelakang, kelas, dosen);

        if (strcmp(nim, search) == 0)
        {
        // back:
        //     printf("Apakah Anda Yakin Ingin Menghapus Dengan Nama %s %s?", namaDepan, namaBelakang);
        //     printf("\n(Y/N) : ");
        //     scanf("%c", &sure);
        //     strupr(sure);

        //     switch (sure)
        //     {
        //     case 'Y':
        //         goto lanjut;
        //         break;
        //     case 'N':
        //         fprintf(Delete, "%s+%s+%s+%s+%s+\n", nim, namaDepan, namaBelakang, kelas, dosen);
        //         printf("Data Tidak Jadi Dihapus\n");
        //         break;

        //     default:
        //         printf("Pilihan Tidak Ada\n");
        //         goto back;
        //         break;
        //     }

        //     lanjut : 
            printf("Data Berhasil Dihapus\n\n");
        }
        else
        {
            fprintf(Delete, "%s+%s+%s+%s+%s+\n", nim, namaDepan, namaBelakang, kelas, dosen);
        }
    }
    fclose(Baca);
    fclose(Delete);
    remove("./Data/Data.txt");
    rename("./Data/switch.txt", "./Data/Data.txt");
}