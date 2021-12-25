#include <stdio.h>
#include <string.h>
int i = 0;

// Var Mahasiswa
char nim[20], namaDepan[100], namaBelakang[100], kelas[100], dosen[100], nomer[100];

// Mahasiswa Lib
#include "create.h"
#include "read.h"
#include "find.h"
#include "update.h"
#include "delete.h"


int main(){
    int choose;

    back :
    printf("Sistem I-Lab : \n\n");
    printf("1. Create Data\n");
    printf("2. Read Data\n");
    printf("3. Update Data\n");
    printf("4. Delete Data\n");
    printf("5. Search Data\n");
    printf("6. Exit\n\n");
    printf("Masukan Pilihan : ");
    scanf("%i", &choose);

    switch (choose)
    {
    case 1:
        createData();
        break;
    case 2:
        readData();
        break;
    case 3:
        updateData();
        break;
    case 4:
        deleteData();
        break;
    case 5:
        SearchData();
        break;
    case 6:
        printf("\n\nKamu Telah Keluar Dari Program Ini ;D\n\n");
        return 0;
        break;

    default:
        goto back;
        break;
    }
    goto back;

}