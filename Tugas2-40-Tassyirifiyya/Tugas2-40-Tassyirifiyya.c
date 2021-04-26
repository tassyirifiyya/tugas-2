#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
  int i, katalog, banyak,choice;
  int total_harga, rp, uang_sisa, uang_tambah, uang_balek, sisa, sisa_uang;
  char pilihan;
  int uang[7] = {0, 55000, 35000, 130000, 100000, 140000, 50000};

  //fungsi katalog untuk menampilkan pada user
  void toko(){
    printf("\n*****************************************\n");
    printf("   Kode |      Katalog      |  Harga     ");
    printf("\n*****************************************\n");
    printf("*   1   | Plisket Skirt     |    55.000 *\n");
    printf("*   2   | Pashmina Plisket  |    35.000 *\n");
    printf("*   3   | BabyDoll Tunic    |   130.000 *\n");
    printf("*   4   | Basic Shirt       |   100.000 *\n");
    printf("*   5   | Plaid Shirt       |   140.000 *\n");
    printf("*   6   | Basic T-Shirt     |    50.000 *\n");
    printf("*****************************************\n");
  }

  //fungsi bayar ketika user melakukan transaksi
  void bayar() {

    total_harga = banyak * uang[i];

    printf("Total Pembelanjaan          : %d",total_harga);
    printf("\nTunai                       : Rp. ");
    scanf("%d", &rp);
    getchar();

    uang_sisa = rp - total_harga;
    sisa_uang = uang_sisa;

    if (uang_sisa < 0) {
      printf("\nUang anda kurang          : Rp.%d",uang_sisa);
      printf("\nMasukkan uang tambahan    : Rp. ");
      scanf("%d", &uang_tambah);
      getchar();

      uang_balek = uang_tambah - uang_sisa;

      printf("\nKembalian Anda             : Rp.%d", uang_balek);
    } else {
      printf("\nKembalian anda             : Rp.%d", sisa_uang);
    }
}
  void memilih() {
    printf("\nApakah anda ingin belanja yang lain (y/n) ? ");
    scanf("%c",&pilihan);
    getchar();

    while (pilihan != 'y' && pilihan != 'n') {
      printf("\nMaaf input anda tidak sesuai!");
      printf("\nApakah anda ingin belanja yang lain (y/n) ? ");
      scanf("%c", &pilihan);
      getchar();
  }
}
  //fungsi beli ketika user memilih barang yang ingin dibeli
    void beli(){
      printf("Input Kode Barang Yang Ingin Dibeli: ");
      scanf("%d",&i);
      getchar();

    while (i > 6) {
      printf("\nMaaf, input anda tidak sesuai!!!");
      printf("Input Kode Barang Yang Ingin Dibeli: ");
      scanf("%d",&i);
      getchar();
    }

      printf("Input Banyak Barang Yang Anda Inginkan: ");
      scanf("%d",&banyak);
      getchar();

      memilih();
  }

  //fungsi membuat layar utama pada user
  void welcome() {
    printf("1. Katalog\n");
    printf("2. Belanja\n");
    printf("3. Keluar\n");

    printf("Input Pilihan Anda : ");
    scanf("%d", &choice);
    getchar();

    if (choice > 3) {
      printf("\nMaaf, input anda tidak sesuai!\n");
      printf("Pilihan anda : ");
      scanf("%d", &choice);
      getchar();
    }

    switch (choice) {
      case 1:
          toko();
          break;
      case 2:
          beli();
          break;
      default:
          exit(0);
      }
  }
    //fungsi memberi sambutan kepada user
    printf("=========================================");
    printf("\n   Selamat Datang di MidasTouch.id");
    printf("\n========================================\n");

    welcome();

    printf("\nTekan enter untuk lanjut...\n");
    getch();

    welcome();

    switch (pilihan) {
      case 'y':
          beli();
          break;
      default:
          break;
    }

    bayar();

    return 0;
  }
