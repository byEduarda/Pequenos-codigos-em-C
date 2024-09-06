#include <stdio.h>

// entrada: um número qualquer
// saída: se pode ser uma das seis faces do dado.
int dado_eh_valido(int dado) {
    return (1 <= dado && dado <= 6);
}

// mapeia uma posição positiva
// para o intervalo 1-40
// no jogo do banco imobiliário
int dar_a_volta(int pos) {
    pos = (pos-1)%40 + 1;
    return pos;
}

void ler_entrada(int* pos_out, int* da_out, int* db_out) {
    int pos, da, db;
    printf("posição e os dados: ");
    scanf("%d %d %d", &pos, &da, &db);

    *pos_out = pos;
    *da_out  = da;
    *db_out  = db;
}

int main() {
    int pos, da, db;
    ler_entrada(&pos, &da, &db);

    if (pos <= 0) {
        printf("posição tem que ser maior que zero\n");
        return 1;
    }

    if (!dado_eh_valido(da) || !dado_eh_valido(db)) {
        printf("dados tem que ser de 1 a 6\n");
        return 1;
    }

    // Fazer a posição voltar ao intervalo 1-40
    pos = dar_a_volta(pos);
    printf("inicio: %d\n", pos);

    // Calcular o resultado
    pos = dar_a_volta(pos + da + db);
    printf("fim: %d\n", pos);
    return 0;
}