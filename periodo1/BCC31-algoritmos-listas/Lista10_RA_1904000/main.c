//
// Created by moraski on 20/05/2021.
//
// gcc main.c -std=c99 -lm && ./a.out
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
 * Structs Definition
 */
struct Point {
    float x;
    float y;
};
struct Date{
    int day;
    int mon;
    int year;
};
struct Person {
    char name[50];
    int day;
    int mon;
    int year;
};
struct Employee {
    char name[50];
    float salary;
    char type[50];
};
struct Phone {
    char ddd[3];
    char number[10];
    char type;
};
struct Contact {
    char name[50];
    char email[70];
    struct Phone phone1;
    struct Phone phone2;
};

/*
 * Definition of function get_current_date()
 * No parameters
 * return values: Struct
 */

struct Date get_current_date() {
    time_t now;
//retorna a contagem de segundos desde 01/01/1970 (padrão Unix)
    time(&now);
// converte time para calendário e retorna uma struct contendo
// os campos dia, mês, ano, hora, minuto e segundo
    struct tm* p_time = localtime(&now);
// copia os dados do struct tm em Heap para um struct Date e o devolve
    struct Date d;
    d.day = p_time->tm_mday;
    d.mon = p_time->tm_mon + 1; // na struct, mês 0-11
    d.year= p_time->tm_year + 1900; // na struct, conta ano a partir de 1900
    return d;
}

float distance2D(struct Point p1, struct Point p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

void distanceVector(int n, struct Point v[n]){
    // troquei para void pq não consegui retornar valor por valor sem quebrar o loop
    if (n%2 != 0){
        printf("Tamanho do vetor não pode ser impar");
    } else{
        for (int i = 0; i < n; ++i) {
            printf("%f \n", sqrt(pow((v[i+1].x - v[i].x), 2) + pow((v[i+1].y - v[i].y), 2)));
            ++i;
        }
    }
}

int getAge(struct Date nascDate){
    struct Date currentDate = get_current_date();
    int age;
    if (currentDate.mon > nascDate.mon){
        age = (currentDate.year - nascDate.year);
    } else if (currentDate.mon == nascDate.mon){
        if (currentDate.day >= nascDate.day){
            age = currentDate.year - nascDate.year;
        } else{
            age = (currentDate.year - nascDate.year) - 1;
        }
    } else{
        age = (currentDate.year - nascDate.year) - 1;
    }
    return age;
}

void printData(struct Person person){
    struct Date dateNasc;
    dateNasc.year = person.year;
    dateNasc.mon = person.mon;
    dateNasc.day = person.day;
    int age = getAge(dateNasc);
    int words = 0;
    for (int i = 0; i < strlen(person.name); ++i) {
        if (words == 0 && person.name[i] != ' '){
            ++words;
        }
        if (person.name[i+1] == ' '){
            ++words;
        }
    }
    printf("Nome: %s\nQuantidade de palavras: %d\nIdade: %d\n", person.name, words, age);
}

void printPersonVector(int n, struct Person v[n]){
    if (n == 0){
        printf("N tem que ser diferente de 0");
    }
    for (int i = 0; i < n; ++i) {
        printData(v[i]);
    }
}

void printReport(int n, struct Employee v[n]){
    // Variaveis Principais
    float mediaSalario, totalSalarios = 0;

    // Quantidade de trabalhadores por cargo
    int quantDeveloper = 0, quantDesigner = 0, quantManager = 0, quantSupport = 0;

    // Media salarial de cada cargo
    float mediaSalarioD = 0, mediaSalarioE = 0, mediaSalarioM = 0, mediaSalarioS = 0;
    for (int i = 0; i < n; ++i) {
        totalSalarios+= v[i].salary;
        if (strcmp(v[i].type, "Developer") != 0){
            mediaSalarioD += v[i].salary;
            ++quantDeveloper;
        }
        if (strcmp(v[i].type, "Designer") != 0){
            mediaSalarioE += v[i].salary;
            ++quantDesigner;
        }
        if (strcmp(v[i].type, "Manager") != 0){
            mediaSalarioM += v[i].salary;
            ++quantManager;
        }
        if (strcmp(v[i].type, "Support") != 0){
            mediaSalarioS += v[i].salary;
            ++quantSupport;
        }
    }
    mediaSalario = totalSalarios/5;
    printf("Total de salario: %2.f\nMedia salarial da empresa: %2.f\n", totalSalarios, mediaSalario);
    printf("\nMedia por tipo de empregado\n--------------------------------\n"
           "Media Developer: %2.f\nMedia Designer: %2.f\nMedia Manager: %2.f\nMedia Support: %2.f\n",
           mediaSalarioD/quantDeveloper, mediaSalarioE/quantDesigner, mediaSalarioM/quantManager, mediaSalarioS/quantSupport);
}

void printContact(struct Contact c){
    printf("Nome: %s\nE-mail: %s\n", c.name, c.email);
    printf("Telefone 01: (%s) %s\nTipo: %c\n", c.phone1.ddd, c.phone1.number, c.phone1.type);
    printf("Telefone 01: (%s) %s\nTipo: %c\n", c.phone2.ddd, c.phone2.number, c.phone2.type);
}

void printContactByPhoneType(int n, struct Contact v[n], char phone_type){
    for (int i = 0; i < n; ++i) {
        if (v[i].phone1.type == phone_type || v[i].phone2.type == phone_type){
            printf("%s\n", v[i].name);
        }
    }
}


struct eventDate{
    int day;
    int month;
    int year;
};
struct Event{
    struct eventDate dataEvento;
    int minutos;
    char descricao[100];
};

void printEventInformation(struct Event event){
    printf("Data do evento: %d/%d/%d\nDuração em minutos: %d\nDescrição: %s\n",
           event.dataEvento.day, event.dataEvento.month, event.dataEvento.year, event.minutos, event.descricao);
}

void fillEvent(int n, struct Event event[n]){
    srand(time(NULL));
    int minutos, index;
    struct eventDate ed[4] = { {31,05,2021}, {05, 03, 2023},
        {16, 02, 2022}, {10, 04, 2021} };
    char descricao[4][100] = { {"casa"}, {"trabalho"}, {"estudos"}, {"lazer"} };
    for (int i = 0; i < n; ++i) {
        index = rand() % 4;
        minutos = rand() % 100;
        event[i].dataEvento = ed[index];
        event[i].minutos = minutos;
        strcpy(event[i].descricao, descricao[index]);
    }
}

void printEventsFiltered(int n, struct Event eventVec[n], int minTime, char text[100]){
    for (int i = 0; i < n; ++i) {
        if (eventVec[i].minutos >= minTime && strcmp(eventVec[i].descricao, text) == 0){
            printf("Data do evento: %02d/%02d/%02d\n"
                   "Duração: %d minutos\n"
                   "Descrição do evento: %s\n"
                   "----------------------------------------\n",
                   eventVec[i].dataEvento.day, eventVec[i].dataEvento.month, eventVec[i].dataEvento.year,
                   eventVec[i].minutos, eventVec[i].descricao);
        }
    }
}

int main() {

    return 0;
}
