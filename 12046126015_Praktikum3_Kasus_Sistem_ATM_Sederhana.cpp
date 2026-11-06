#include <stdio.h>

int main() {
    const int PIN_BENAR = 1234;
    int saldo = 5000000;
    int pin_input;
    int menu;
    int tarik;

    printf("=== MESIN ATM BANK SI ===\n");
    printf("Masukan PIN (4 digit): ");
    scanf("%d", &pin_input);

    if (pin_input == PIN_BENAR) {
        printf("\nPIN Benar, Login Berhasil!\n\n");
        printf("=== MENU UTAMA ===\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Tunai\n");
        printf("Pilih Menu (1/2): ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Saldo Anda saat ini: Rp %d\n", saldo);
                break;
            case 2:
                printf("Masukan nominal tarik: Rp ");
                scanf("%d", &tarik);
                if (tarik <= saldo) {
                    if (tarik % 50000 == 0) {
                        saldo = saldo - tarik;
                        printf("Penarikan berhasil!\n");
                        printf("Sisa saldo: Rp %d\n", saldo);
                    } else {
                        printf("ERROR: Nominal harus kelipatan Rp 50.000\n");
                    }
                } else {
                    printf("ERROR: Saldo tidak cukup!\n");
                }
                break;
            default:
                printf("ERROR: Menu tidak tersedia.\n");
        }
    } else {
        printf("\nPIN SALAH! Akses ditolak.\n");
    }

    printf("\Terima kasih telah menggunakan ATM Bank SI.\n");
    return 0;
}