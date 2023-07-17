#include <stdio.h>

    int ajustaDias (int bissexto, int mes, int sinal) {
        //quantidade de dias
        if ((bissexto == 1) && (mes == 2)) {
            return 29 * sinal;
            }
        else if ((bissexto == 0) && (mes == 2)) return 28 * sinal;
        else {
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            return sinal * 30;
        }
        else {
            return sinal * 31;
        }
        }
     }

    int main(void) {
        int d1, m1, a1, d2, m2, a2, ano1_Bissexto=0, ano2_Bissexto=0;
        scanf("%d/%d/%d", &d1, &m1, &a1);
        scanf("%d/%d/%d", &d2, &m2, &a2);
        int resultado = -d1 + d2; 

        
        for (int AnoAtual = a1; AnoAtual <= a2; AnoAtual++) {
            if ((AnoAtual % 400 == 0) ||(AnoAtual% 4==0 && AnoAtual %100 != 0)) resultado += 366;
            else resultado += 365;
        }
            if ((a1 % 400 == 0) ||(a1% 4==0 && a1 %100 != 0)) ano1_Bissexto = 1;
            if ((a2 % 400 == 0) ||(a2% 4==0 && a2 %100 != 0)) ano2_Bissexto = 1;

            if (ano2_Bissexto == 1) resultado -=366;
            else resultado -=365;

            for(int mesAtual = 1; mesAtual < m1; mesAtual++) resultado += ajustaDias(ano1_Bissexto, mesAtual, -1);
            for(int mesAtual = 1; mesAtual < m2; mesAtual++) resultado += ajustaDias(ano2_Bissexto, mesAtual, 1);

            printf("%d", resultado);
        return 0;
    }