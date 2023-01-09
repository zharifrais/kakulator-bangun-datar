#include <stdio.h>

int perhitungan() {
    int pilih;
    float luas, keliling, alas, tinggi, panjang, lebar, sisi, sisi2, sisi3, jarijari;

    char bangun_datar[8][99]={"1. Persegi","2. Persegi panjang","3. Jajar ganjang","4. Segitiga","5. Belah ketupat","6. Layang - layang","7. Trapesium","8. Lingkaran"};
    printf("------------------------------------\n");
    printf(" kalkulator penghitung bangun datar\n");
    printf("------------------------------------\n");
    for (int i=0 ; i<8 ; i++)
    {
        printf("%s\n",bangun_datar[i]);
    }
    printf("------------------------------------\n");
    printf("pilih bangun datar : ");
    scanf("%d", &pilih);
    printf("------------------------------------\n");

    if (pilih==1){
        system ("cls");
        printf("rumus persegi\n");
        printf("1. keliling\n");
        printf("2. luas\n");
        printf("------------------------------------\n");
        printf("pilih rumus : ");
        scanf("%d", &pilih);
        if(pilih==1){
            printf("menghitung keliling\n");
            printf("masukkan sisi : ");
            scanf("%f", &sisi);
            printf("jawaban : \n");
            printf("K = 4 x s \n");
            printf("K = 4 x %.1f \n", sisi);
            keliling = 4 * sisi;
            printf("K = %.1f", keliling);
        }else if(pilih==2){
            printf("menghitung luas\n");
            printf("masukkan sisi : ");
            scanf("%f", &sisi);
            printf("jawaban : \n");
            printf("L = s x s \n");
            printf("L = %.1f x %.1f \n", sisi, sisi);
            luas = sisi * sisi;
            printf("K = %.1f", luas);
        }
    }else if (pilih==2){
        system ("cls");
        printf("rumus persegi panjang\n");
        printf("1. keliling\n");
        printf("2. luas\n");
        printf("------------------------------------\n");
        printf("pilih rumus : ");
        scanf("%d", &pilih);
        if(pilih==1) {
            printf("menghitung keliling\n");
            printf("masukkan panjang : ");
            scanf("%f", &panjang);
            printf("masukkan lebar : ");
            scanf("%f", &lebar);
            printf("jawaban : \n");
            printf("K = 2 (p + l)\n");
            printf("K = 2 (%.1f + %.1f)\n", panjang, lebar);
            keliling = 2 * (panjang + lebar);
            printf("K = %.1f", keliling);
        }else if(pilih==2){
            printf("menghitung luas\n");
            printf("masukkan panjang : ");
            scanf("%f", &panjang);
            printf("masukkan lebar : ");
            scanf("%f", &lebar);
            printf("jawaban : \n");
            printf("L = p x l\n");
            printf("L = %.1f x %.1f\n", panjang, lebar);
            luas = panjang * lebar;
            printf("K = %.1f", luas);
        }
    }else if(pilih==3){
        system ("cls");
        printf("rumus jajar genjang\n");
        printf("1. keliling\n");
        printf("2. luas\n");
        printf("------------------------------------\n");
        printf("pilih rumus : ");
        scanf("%d", &pilih);
        if(pilih==1){
            printf("menghitung keliling\n");
            printf("masukkan alas : ");
            scanf("%f", &sisi);
            printf("masukkan sisi miring : ");
            scanf("%f", &sisi2);
            printf("jawaban : \n");
            printf("K = 2 (a + b) \n");
            printf("k = 2 (%.1f x %.1f)\n", alas, sisi2);
            keliling = 2 * (alas + sisi2);
            printf("K = %.1f", keliling);
        }else if(pilih==2){
            printf("menghitung luas\n");
            printf("masukkan alas : ");
            scanf("%f", &alas);
            printf("masukkan tinggi : ");
            scanf("%f", &tinggi);
            printf("jawaban : \n");
            printf("L = a x t\n");
            printf("L = %.1f x %.1f\n", alas, tinggi);
            luas = alas * tinggi;
            printf("L = %.1f", luas);
        }
    }else if(pilih==4){
            system ("cls");
            printf("rumus segitiga\n");
            printf("1. keliling\n");
            printf("2. luas\n");
            printf("------------------------------------\n");
            printf("pilih rumus : ");
            scanf("%d", &pilih);
            if(pilih==1){
                printf("menghitung keliling\n");
                printf("masukkan sisi 1 : ");
                scanf("%f", &sisi);
                printf("masukkan sisi 2 : ");
                scanf("%f", &sisi2);
                printf("masukkan sisi 3 : ");
                scanf("%f", &sisi3);
                printf("jawaban : \n");
                printf("K = a + b + c\n");
                printf("k = %.1f + %.1f + %.1f\n", sisi, sisi2, sisi3);
                keliling = sisi + sisi2 + sisi3;
                printf("K = %.1f", keliling);
            }else if(pilih==2){
                printf("menghitung luas\n");
                printf("menghitung keliling\n");
                printf("masukkan alas : ");
                scanf("%f", &alas);
                printf("masukkan tinggi : ");
                scanf("%f", &tinggi);
                printf("jawaban : \n");
                printf("L = 1/2 x a x t\n");
                printf("L = 1/2 x %.1f x %.1f\n", alas, tinggi);
                luas = alas * tinggi / 2;
                printf("L = %.1f", luas);
                }
    }else if(pilih==5){
        system ("cls");
        printf("rumus belah ketupat\n");
            printf("1. keliling\n");
            printf("2. luas\n");
            printf("------------------------------------\n");
            printf("pilih rumus : ");
            scanf("%d", &pilih);
            if(pilih==1){
                printf("menghitung keliling\n");
                printf("masukkan sisi 1 : ");
                scanf("%f", &sisi);
                printf("masukkan sisi 2 : ");
                scanf("%f", &sisi2);
                printf("jawaban : \n");
                printf("K = 2 (a + b)\n");
                printf("k = 2 (%.1f + %.1f)\n", sisi, sisi2);
                keliling = 2 * (sisi + sisi2);
                printf("K = %.1f", keliling);
            }else if(pilih==2){
                printf("menghitung luas\n");
                printf("menghitung keliling\n");
                printf("masukkan diagonal 1 : ");
                scanf("%f", &alas);
                printf("masukkan diagonal 2 : ");
                scanf("%f", &tinggi);
                printf("jawaban : \n");
                printf("L = 1/2 x d1 x d2\n");
                printf("L = 1/2 x %.1f x %.1f\n", alas, tinggi);
                luas = alas * tinggi / 2;
                printf("L = %.1f", luas);
                }
    }else if(pilih==6){
        system ("cls");
        printf("rumus layang-layang\n");
            printf("1. keliling\n");
            printf("2. luas\n");
            printf("------------------------------------\n");
            printf("pilih rumus : ");
            scanf("%d", &pilih);
            if(pilih==1){
                printf("menghitung keliling\n");
                printf("masukkan diagonal 1 : ");
                scanf("%f", &sisi);
                printf("jawaban : \n");
                printf("K = 2 (a + b)\n");
                printf("k = 2 (%.1f + %.1f)\n", sisi, sisi2);
                keliling = 2 * (sisi + sisi2);
                printf("K = %.1f", keliling);
            }else if(pilih==2){
                printf("menghitung luas\n");
                printf("menghitung keliling\n");
                printf("masukkan diagonal 1 : ");
                scanf("%f", &alas);
                printf("masukkan diagonal 2 : ");
                scanf("%f", &tinggi);
                printf("jawaban : \n");
                printf("L = 1/2 x d1 x d2\n");
                printf("L = 1/2 x %.1f x %.1f\n", alas, tinggi);
                luas = alas * tinggi / 2;
                printf("L = %.1f", luas);
                }
    }else if(pilih==7){
        system ("cls");
        printf("rumus trapesium\n");
            printf("1. keliling\n");
            printf("2. luas\n");
            printf("------------------------------------\n");
            printf("pilih rumus : ");
            scanf("%d", &pilih);
            if(pilih==1){
                printf("menghitung keliling\n");
                printf("masukkan diagonal 1 : ");
                scanf("%f", &sisi);
                printf("jawaban : \n");
                printf("K = 2 (a + b)\n");
                printf("k = 2 (%.1f + %.1f)\n", sisi, sisi2);
                keliling = 2 * (sisi + sisi2);
                printf("K = %.1f", keliling);
            }else if(pilih==2){
                printf("menghitung luas\n");
                printf("menghitung keliling\n");
                printf("masukkan sisi 1 : ");
                scanf("%f", &sisi);
                printf("masukkan sisi 2 : ");
                scanf("%f", &sisi2);
                printf("masukkan tinggi : ");
                scanf("%f", &tinggi);
                printf("jawaban : \n");
                printf("L = (a + b) x t / 2\n");
                printf("L = (%.1f + %.1f) x %.1f / 2\n", sisi, sisi2, tinggi);
                luas = (sisi + sisi2) * tinggi / 2;
                printf("L = %.1f", luas);
                }
    }else if(pilih==8){
        system ("cls");
        printf("Rumus Lingkaran \n");
        printf("1. Keliling \n");
        printf("2. Luas \n");
        printf("------------------------------------\n");
        printf("Pilih Rumus : ");
        scanf("%d", &pilih);
        if(pilih==1){
            printf("Menghitung Keliling \n");
            printf("Masukkan jari-jari : ");
            scanf("%f", &jarijari);
            printf("K = 2 x phi x r \n");
            printf("K = 2 x phi x %.1f \n", jarijari);
            keliling = 2 * 3.14 * jarijari;
            printf("K = %.1f", keliling);

        }else if (pilih==2){
            printf("Menghitung Luas \n");
            printf("Masukkan jari-jari : ");
            scanf("%f", &jarijari);
            printf("L = phi x r x r \n");
            printf("L = phi x %.1f x %.1f \n", jarijari, jarijari);
            luas = 3.14*jarijari*jarijari;
            printf("L = %.1f", luas);
        }


    }


}

int main(){
    char ulang;
        mulai:
        perhitungan();
        printf("\n==================================================");
        printf("\nApakah anda ingin menggunakan program ini lagi : ");
        scanf("%s", &ulang);

        if(ulang=='y'){
        goto mulai;
        }
}

