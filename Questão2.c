#include <stdio.h>

int main() {
    char inicio_desc[4], fim_desc[4];
    int dia_inicio, dia_fim, hora_inicio, minuto_inicio, segundo_inicio;
    int hora_fim, minuto_fim, segundo_fim;
    int duracao_dias, duracao_horas, duracao_minutos, duracao_segundos;

    
    scanf("%s %d", inicio_desc, &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("%s %d", fim_desc, &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);

    // Cálculo da duração em segundos
    int inicio_segundos = (dia_inicio * 24 * 60 * 60) + (hora_inicio * 60 * 60) + (minuto_inicio * 60) + segundo_inicio;
    int fim_segundos = (dia_fim * 24 * 60 * 60) + (hora_fim * 60 * 60) + (minuto_fim * 60) + segundo_fim;
    int duracao_total_segundos = fim_segundos - inicio_segundos;

    // Cálculo da duração em dias, horas, minutos e segundos
    duracao_dias = duracao_total_segundos / (24 * 60 * 60);
    duracao_total_segundos %= (24 * 60 * 60);
    duracao_horas = duracao_total_segundos / (60 * 60);
    duracao_total_segundos %= (60 * 60);
    duracao_minutos = duracao_total_segundos / 60;
    duracao_segundos = duracao_total_segundos % 60;

    // Saída esta sendo formatada aqui
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", duracao_dias, duracao_horas, duracao_minutos, duracao_segundos);

    return 0;
}