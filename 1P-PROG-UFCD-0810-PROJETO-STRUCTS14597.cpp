#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <ctype.h>
#include <ctime>

using namespace std;
const int numModulosprogramacao = 6;
const int numModulosmatematica = 3;
const int numModulosportugues = 3;
const int numModulosingles = 3;
const int numModulosareadeintegracao = 2;
const int numModulostic = 4;
const int numModuloseducacaofisica = 6;
const int numModulosfisicaequimica = 6;
const int numModulosmicroprocessadoreseautomacao = 4;
const int numModulosredes = 2;
const int numModuloseducacaomoralereligiosa = 1;

struct Notas {
    string areaNome;
    string moduloNome[20];
    int moduloNota[20];
};
void mostramodulos(Notas x, int numModulos) {
    for (int i = 0; i < numModulos; i++) {
        cout << x.moduloNome[i] << endl;
        cout << x.moduloNota[i] << endl;

    }
}
/*****************Media Programacao*************/
float mediaprogramacao(Notas& notasprogramacao) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosprogramacao; i++) {
        if (notasprogramacao.moduloNota[i] >= 10) {
            media += notasprogramacao.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/*****************Media Matematica*****************/
float mediamatematica(Notas& notasmatematica) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosmatematica; i++) {
        if (notasmatematica.moduloNota[i] >= 10) {
            media += notasmatematica.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/**************************Media Portugues**********************/
float mediaportugues(Notas& notasportugues) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosportugues; i++) {
        if (notasportugues.moduloNota[i] >= 10) {
            media += notasportugues.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/*****************Media Ingles*****************/
float mediaingles(Notas& notasingles) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosingles; i++) {
        if (notasingles.moduloNota[i] >= 10) {
            media += notasingles.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/***************Media Area de Integracao******************/
float mediaareadeintegracao(Notas& notasareadeintegracao) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosareadeintegracao; i++) {
        if (notasareadeintegracao.moduloNota[i] >= 10) {
            media += notasareadeintegracao.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/***************Media Tic*****************/
float mediatic(Notas& notastic) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulostic; i++) {
        if (notastic.moduloNota[i] >= 10) {
            media += notastic.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/*****************Media Educacao Fisica***************/
float mediaeducacaofisica(Notas& notaseducacaofisica) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModuloseducacaofisica; i++) {
        if (notaseducacaofisica.moduloNota[i] >= 10) {
            media += notaseducacaofisica.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/**************Media Fisica e Quimica************/
float mediafisicaequimica(Notas& notasfisicaequimica) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosfisicaequimica; i++) {
        if (notasfisicaequimica.moduloNota[i] >= 10) {
            media += notasfisicaequimica.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/*******Media Redes******/
float mediaredes(Notas& notasredes) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosredes; i++) {
        if (notasredes.moduloNota[i] >= 10) {
            media += notasredes.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}

/******* Media Microprocessadores e Automacao ********/
float mediamicroprocessadoreseautomacao(Notas& notasmicroprocessadoreseautomacao) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModulosmicroprocessadoreseautomacao; i++) {
        if (notasmicroprocessadoreseautomacao.moduloNota[i] >= 10) {
            media += notasmicroprocessadoreseautomacao.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/*********************Media Educacao Moral e Religiosa ******************/
float mediaeducacaomoralereligiosa(Notas& notaseducacaomoralereligiosa) {
    float media = 0;
    float notas = 0;
    for (int i = 0; i < numModuloseducacaomoralereligiosa; i++) {
        if (notaseducacaomoralereligiosa.moduloNota[i] >= 10) {
            media += notaseducacaomoralereligiosa.moduloNota[i];
            notas++;
        }
    }
    if (notas > 0) {
        return media / notas;
    }
    else {
        return 0;
    }
}
/********* Maximo / Maximo Curso Inteiro *********/
int maximoCursoInteiro(Notas& notas) {
    int maximo = 0;
    for (int i = 0; i < numModulosprogramacao + numModulosmatematica + numModulosportugues + numModulosingles + numModulosareadeintegracao + numModulostic + numModuloseducacaofisica + numModulosfisicaequimica + numModulosmicroprocessadoreseautomacao + numModulosredes + numModuloseducacaomoralereligiosa; i++) {
        maximo = max(maximo, notas.moduloNota[i]);
    }
    return maximo;
}
/******** Minimo / Minimo do Curso Inteiro ***********/
float minimoCursoInteiro(Notas& notas) {
    float minimo = 100.0;
    for (int i = 0; i < numModulosprogramacao + numModulosmatematica + numModulosportugues + numModulosingles + numModulosareadeintegracao + numModulostic + numModuloseducacaofisica + numModulosfisicaequimica + numModulosmicroprocessadoreseautomacao + numModulosredes + numModuloseducacaomoralereligiosa; i++) {
        if (notas.moduloNota[i] > 0 && notas.moduloNota[i] < minimo) {
            minimo = notas.moduloNota[i];
        }
    }
    return minimo;
}

float mediaCursoInteiro(Notas& notas) {
    float media = 0;
    int notas_validas = 0;
    for (int i = 0; i < numModulosprogramacao + numModulosmatematica + numModulosportugues + numModulosingles + numModulosareadeintegracao + numModulostic + numModuloseducacaofisica + numModulosfisicaequimica + numModulosmicroprocessadoreseautomacao + numModulosredes + numModuloseducacaomoralereligiosa; i++) {
        if (notas.moduloNota[i] >= 10) {
            media += notas.moduloNota[i];
            notas_validas++;
        }
    }
    if (notas_validas > 0) {
        return media / notas_validas;
    }
    else {
        return 0;
    }
}

int main() {
    Notas aluno_notas;
    Notas notasprogramacao;
    Notas notasmatematica;
    Notas notasportugues;
    Notas notasingles;
    Notas notasareadeintegracao;
    Notas notastic;
    Notas notaseducacaofisica;
    Notas notasfisicaequimica;
    Notas notasmicroprocessadoreseautomacao;
    Notas notasredes;
    Notas notaseducacaomoralereligiosa;
    int resposta;
    float media = mediaCursoInteiro (aluno_notas);
    int maximo = maximoCursoInteiro(aluno_notas);
    float minimo = minimoCursoInteiro(aluno_notas);



    /**********Programacao**************/
    notasprogramacao.areaNome = "Programacao";
    notasprogramacao.moduloNome[0] = "algoritemia";
    notasprogramacao.moduloNome[1] = "Estrutura e Metodologias de Programacao";
    notasprogramacao.moduloNome[2] = "C++ - Fundamento ";
    notasprogramacao.moduloNome[3] = "C++ - Avancado ";
    notasprogramacao.moduloNome[4] = "Java ";
    notasprogramacao.moduloNome[5] = "Java web ";
    notasprogramacao.moduloNota[0] = 17;
    notasprogramacao.moduloNota[1] = 14;
    notasprogramacao.moduloNota[2] = 10;
    notasprogramacao.moduloNota[3] = 0;
    notasprogramacao.moduloNota[4] = 0;
    notasprogramacao.moduloNota[5] = 0;

    /********** Matematica **************/
    notasmatematica.areaNome = "Matematica";
    notasmatematica.moduloNome[0] = "Estatistica";
    notasmatematica.moduloNome[1] = "Funcoes Polinomiais";
    notasmatematica.moduloNome[2] = "Geometria";
    notasmatematica.moduloNota[0] = 13;
    notasmatematica.moduloNota[1] = 0;
    notasmatematica.moduloNota[2] = 0;

    /**********Ingles**************/
    notasingles.areaNome = "Ingles";
    notasingles.moduloNome[0] = "Eu e o Mundo Profissional";
    notasingles.moduloNome[1] = "Um Mundo de Muitas Linguas";
    notasingles.moduloNome[2] = "O Mundo Tecnologico";
    notasingles.moduloNota[0] = 11;
    notasingles.moduloNota[1] = 0;
    notasingles.moduloNota[2] = 0;

    /**********Portugues**************/
    notasportugues.areaNome = "Portugues";
    notasportugues.moduloNome[0] = "Contos populares";
    notasportugues.moduloNome[1] = "Frasa de Ines Pereira";
    notasportugues.moduloNome[2] = "Lusiadas";
    notasportugues.moduloNota[0] = 12;
    notasportugues.moduloNota[1] = 13;
    notasportugues.moduloNota[2] = 0;

    /**********Area de Integracao**************/
    notasareadeintegracao.areaNome = "Area de Integracao";
    notasareadeintegracao.moduloNome[0] = "Modulo 1";
    notasareadeintegracao.moduloNome[1] = "Modulo 2";
    notasareadeintegracao.moduloNota[0] = 0;
    notasareadeintegracao.moduloNota[1] = 0;


    /**********Tic**************/
    notastic.areaNome = "Tic";
    notastic.moduloNome[0] = "Introducao a modelacao 3D";
    notastic.moduloNome[1] = "Edicao de som e video";
    notastic.moduloNome[2] = "Organizacao e tratamento de dados";
    notastic.moduloNome[3] = "Pesquisar, filtrar e estruturar informacao e conteudos em ambientes digitais";
    notastic.moduloNota[0] = 14;
    notastic.moduloNota[1] = 0;
    notastic.moduloNota[2] = 0;
    notastic.moduloNota[3] = 0;

    /**********Educacao Fisica**************/
    notaseducacaofisica.areaNome = "Educacao Fisica";
    notaseducacaofisica.moduloNome[0] = "Jogos Desportivos Coletivos I";
    notaseducacaofisica.moduloNome[1] = "Ginastica I ";
    notaseducacaofisica.moduloNome[2] = "Atletismo / Raquetas / Patinagem I";
    notaseducacaofisica.moduloNome[3] = "Dança I";
    notaseducacaofisica.moduloNome[4] = "Aptidao fisica";
    notaseducacaofisica.moduloNome[5] = "Atividades fisicas / contextos e saude I";
    notaseducacaofisica.moduloNota[0] = 16;
    notaseducacaofisica.moduloNota[1] = 0;
    notaseducacaofisica.moduloNota[2] = 0;
    notaseducacaofisica.moduloNota[3] = 0;
    notaseducacaofisica.moduloNota[4] = 0;
    notaseducacaofisica.moduloNota[5] = 0;

    /**********Fisica e Quimica**************/
    notasfisicaequimica.areaNome = "Fisica e Quimica";
    notasfisicaequimica.moduloNome[0] = "Forcas e Movimentos";
    notasfisicaequimica.moduloNome[1] = "Estatica";
    notasfisicaequimica.moduloNome[2] = "Hidrostatica e Hidrodinamica";
    notasfisicaequimica.moduloNome[3] = "Luz e Fontes de Luz";
    notasfisicaequimica.moduloNome[4] = "Otica geometrica";
    notasfisicaequimica.moduloNome[5] = "Circuitos eletricos";
    notasfisicaequimica.moduloNota[0] = 15;
    notasfisicaequimica.moduloNota[1] = 19;
    notasfisicaequimica.moduloNota[2] = 13;
    notasfisicaequimica.moduloNota[3] = 0;
    notasfisicaequimica.moduloNota[4] = 0;
    notasfisicaequimica.moduloNota[5] = 0;

    /**********Microprocessadores e Automacao**************/
    notasmicroprocessadoreseautomacao.areaNome = "Microprocessadores e Automacao";
    notasmicroprocessadoreseautomacao.moduloNome[0] = "Dispositivos e perifericos";
    notasmicroprocessadoreseautomacao.moduloNome[1] = "Sistemas operativos - tipologias";
    notasmicroprocessadoreseautomacao.moduloNome[2] = "Utilitarios";
    notasmicroprocessadoreseautomacao.moduloNome[3] = "Informatica - nocoes basicas";
    notasmicroprocessadoreseautomacao.moduloNota[0] = 14;
    notasmicroprocessadoreseautomacao.moduloNota[1] = 14;
    notasmicroprocessadoreseautomacao.moduloNota[2] = 0;
    notasmicroprocessadoreseautomacao.moduloNota[3] = 0;


    /**********Redes**************/
    notasredes.areaNome = "Redes";
    notasredes.moduloNome[0] = "Conexoes de rede";
    notasredes.moduloNome[1] = "Sistemas de rede local";
    notasredes.moduloNota[0] = 14;
    notasredes.moduloNota[1] = 0;

    /**********Educacao Moral e Religiosa**************/
    notaseducacaomoralereligiosa.areaNome = "Educacao Moral e Religiosa";
    notaseducacaomoralereligiosa.moduloNome[0] = "Modulo 1";
    notaseducacaomoralereligiosa.moduloNota[0] = 0;

    cout << " * BEM VINDO AO PROGRAMA **" << endl;
    cout << "* PERCURSO AO LONGO DO CURSO *" << endl;
    do {
        cout << "O que pertendes fazer :" << endl;
        cout << "0 - sair" << endl;
        cout << "1 - Ver Modulos e notas" << endl;
        cout << "2 - Ver media dos Modulos" << endl;
        cout << "3 - Ver nota maxima dos Modulos" << endl;
        cout << "4 - Ver nota minima dos Modulos" << endl;
        cout << "5 - Ver nota mais elevada tirada no curso inteiro" << endl;
        cout << "6 - Ver nota mais baixa tirada no curso inteiro" << endl;
        cout << "7 - Ver media do curso inteiro" << endl;
        cout << "R: ";
        cin >> resposta;
        switch (resposta) {
        /*Ver Modulos e Notas*/
        case 1:
            /*system("cls");*/
            cout << endl << endl << "MODULOS DE PROGRAMACAO" << endl;
            mostramodulos(notasprogramacao, numModulosprogramacao);

            cout << endl << endl << "MODULOS DE MATEMATICA" << endl;
            mostramodulos(notasmatematica, numModulosmatematica);

            cout << endl << endl << "MODULOS DE INGLES" << endl;
            mostramodulos(notasingles, numModulosingles);

            cout << endl << endl << "MODULOS DE PORTUGUES" << endl;
            mostramodulos(notasportugues, numModulosportugues);

            cout << endl << endl << "MODULOS DE AREA DE INTEGRACAO" << endl;
            mostramodulos(notasareadeintegracao, numModulosareadeintegracao);

            cout << endl << endl << "MODULOS DE TIC" << endl;
            mostramodulos(notastic, numModulostic);

            cout << endl << endl << "MODULOS DE EDUCACAO FISICA" << endl;
            mostramodulos(notaseducacaofisica, numModuloseducacaofisica);

            cout << endl << endl << "MODULOS DE FISICA E QUIMICA" << endl;
            mostramodulos(notasfisicaequimica, numModulosfisicaequimica);

            cout << endl << endl << "MODULOS DE MICROPROCESSADORES E AUTOMACAO" << endl;
            mostramodulos(notasmicroprocessadoreseautomacao, numModulosmicroprocessadoreseautomacao);

            cout << endl << endl << "MODULOS DE REDES" << endl;
            mostramodulos(notasredes, numModulosredes);

            cout << endl << endl << "MODULOS DE EDUCACAO MORAL E RELIGIOSA" << endl;
            mostramodulos(notaseducacaomoralereligiosa, numModuloseducacaomoralereligiosa);
            break;
        /*Ver Media*/
        case 2:
            do {
                /*system("cls");*/
                cout << "De qual Modulo deseja ver a media :" << endl;
                cout << "0 - Nenhum" << endl;
                cout << "1 - PROGRAMACAO" << endl;
                cout << "2 - MATEMATICA" << endl;
                cout << "3 - PORTUGUES" << endl;
                cout << "4 - INGLES" << endl;
                cout << "5 - AREA DE INTEGRACAO" << endl;
                cout << "6 - TIC" << endl;
                cout << "7 - EDUCACAO FISICA" << endl;
                cout << "8 - FISICA E QUIMICA" << endl;
                cout << "9 - MICROPROCESSADORES E AUTOMACAO" << endl;
                cout << "10 - REDES" << endl;
                cout << "11 - EDUCACAO MORAL E RELIGIOSA" << endl;
                cout << "R: ";
                cin >> resposta;
                if (resposta == 1) {
                    cout << "A Media de PROGRAMACAO" << endl;
                    cout << "R:" << mediaprogramacao(notasprogramacao) << endl;

                }
                else if (resposta == 2) {
                    cout << "A Media de MATEMATICA" << endl;
                    cout << "R:" << mediamatematica(notasmatematica) << endl;
                }
                else if (resposta == 3) {
                    cout << "A Media de PORTUGUES" << endl;
                    cout << "R:" << mediaportugues(notasportugues) << endl;
                }
                else if (resposta == 4) {
                    cout << "A Media de INGLES" << endl;
                    cout << "R:" << mediaingles(notasingles) << endl;
                }
                else if (resposta == 5) {
                    cout << "A Media de AREA DE INTEGRACAO" << endl;
                    cout << "R:" << mediaareadeintegracao(notasareadeintegracao) << endl;
                }
                else if (resposta == 6) {
                    cout << "A Media de TIC" << endl;
                    cout << "R:" << mediatic(notastic) << endl;
                }
                else if (resposta == 7) {
                    cout << "A Media de EDUCACAO FISICA" << endl;
                    cout << "R:" << mediaeducacaofisica(notaseducacaofisica) << endl;
                }
                else if (resposta == 8) {
                    cout << "A Media de FISICA E QUIMICA" << endl;
                    cout << "R:" << mediafisicaequimica(notasfisicaequimica) << endl;
                }
                else if (resposta == 9) {
                    cout << "A Media de MICROPROCESSADORES E AUTOMACAO" << endl;
                    cout << "R:" << mediamicroprocessadoreseautomacao(notasmicroprocessadoreseautomacao) << endl;
                }
                else if (resposta == 10) {
                    cout << "A Media de REDES" << endl;
                    cout << "R:" << mediaredes(notasredes) << endl;
                }
                else if (resposta == 11) {
                    cout << "A Media de EDUCACAO MORAL E RELIGIOSA" << endl;
                    cout << "R:" << mediaeducacaomoralereligiosa(notaseducacaomoralereligiosa) << endl;
                }
            } while (resposta != 0);

            break;
        /*Ver Maximo*/
        case 3:
            do {

                cout << "De qual Modulo deseja ver a nota maxima :" << endl;
                cout << "0 - Nenhum" << endl;
                cout << "1 - PROGRAMACAO" << endl;
                cout << "2 - MATEMATICA" << endl;
                cout << "3 - PORTUGUES" << endl;
                cout << "4 - INGLES" << endl;
                cout << "5 - AREA DE INTEGRACAO" << endl;
                cout << "6 - TIC" << endl;
                cout << "7 - EDUCACAO FISICA" << endl;
                cout << "8 - FISICA E QUIMICA" << endl;
                cout << "9 - MICROPROCESSADORES E AUTOMACAO" << endl;
                cout << "10 - REDES" << endl;
                cout << "11 - EDUCACAO MORAL E RELIGIOSA" << endl;
                cout << "R: ";
                cin >> resposta;
                if (resposta == 1) {
                    cout << "A Nota maxima de PROGRAMACAO" << endl;
                    cout << "R:" << maximoCursoInteiro(notasprogramacao) << endl;

                }
                else if (resposta == 2) {
                    cout << "A Nota maxima de MATEMATICA" << endl;
                    cout << "R:" << maximoCursoInteiro(notasmatematica) << endl;
                }
                else if (resposta == 3) {
                    cout << "A Nota maxima de PORTUGUES" << endl;
                    cout << "R:" << maximoCursoInteiro(notasportugues) << endl;
                }
                else if (resposta == 4) {
                    cout << "A Nota maxima de INGLES" << endl;
                    cout << "R:" << maximoCursoInteiro(notasingles) << endl;
                }
                else if (resposta == 5) {
                    cout << "A Nota maxima de AREA DE INTEGRACAO" << endl;
                    cout << "R:" << maximoCursoInteiro(notasareadeintegracao) << endl;
                }
                else if (resposta == 6) {
                    cout << "A Nota maxima de TIC" << endl;
                    cout << "R:" << maximoCursoInteiro(notastic) << endl;
                }
                else if (resposta == 7) {
                    cout << "A Nota maxima de EDUCACAO FISICA" << endl;
                    cout << "R:" << maximoCursoInteiro(notaseducacaofisica) << endl;
                }
                else if (resposta == 8) {
                    cout << "A Nota maxima de FISICA E QUIMICA" << endl;
                    cout << "R:" << maximoCursoInteiro(notasfisicaequimica) << endl;
                }
                else if (resposta == 9) {
                    cout << "A Nota maxima de MICROPROCESSADORES E AUTOMACAO" << endl;
                    cout << "R:" << maximoCursoInteiro(notasmicroprocessadoreseautomacao) << endl;
                }
                else if (resposta == 10) {
                    cout << "A Nota maxima de REDES" << endl;
                    cout << "R:" << maximoCursoInteiro(notasredes) << endl;
                }
                else if (resposta == 11) {
                    cout << "A Nota maxima de EDUCACAO MORAL E RELIGIOSA" << endl;
                    cout << "R:" << maximoCursoInteiro(notaseducacaomoralereligiosa) << endl;
                }
            } while (resposta != 0);
            break;
        /*Ver Minimo*/
        case 4:
            do {
                /*system("cls");*/
                cout << "De qual Modulo deseja ver a nota minima :" << endl;
                cout << "0 - Nenhum" << endl;
                cout << "1 - PROGRAMACAO" << endl;
                cout << "2 - MATEMATICA" << endl;
                cout << "3 - PORTUGUES" << endl;
                cout << "4 - INGLES" << endl;
                cout << "5 - AREA DE INTEGRACAO" << endl;
                cout << "6 - TIC" << endl;
                cout << "7 - EDUCACAO FISICA" << endl;
                cout << "8 - FISICA E QUIMICA" << endl;
                cout << "9 - MICROPROCESSADORES E AUTOMACAO" << endl;
                cout << "10 - REDES" << endl;
                cout << "11 - EDUCACAO MORAL E RELIGIOSA" << endl;
                cout << "R: ";
                cin >> resposta;
                if (resposta == 1) {
                    cout << "A Nota minima de PROGRAMACAO" << endl;
                    cout << "R:" << minimoCursoInteiro(notasprogramacao) << endl;

                }
                else if (resposta == 2) {
                    cout << "A Nota minima de MATEMATICA" << endl;
                    cout << "R:" << minimoCursoInteiro(notasmatematica) << endl;
                }
                else if (resposta == 3) {
                    cout << "A Nota minima de PORTUGUES" << endl;
                    cout << "R:" << minimoCursoInteiro(notasportugues) << endl;
                }
                else if (resposta == 4) {
                    cout << "A Nota minima INGLES" << endl;
                    cout << "R:" << minimoCursoInteiro(notasingles) << endl;
                }
                else if (resposta == 5) {
                    cout << "A Nota minima de AREA DE INTEGRACAO" << endl;
                    cout << "R:" << minimoCursoInteiro(notasareadeintegracao) << endl;
                }
                else if (resposta == 6) {
                    cout << "A Nota minima TIC" << endl;
                    cout << "R:" << minimoCursoInteiro(notastic) << endl;
                }
                else if (resposta == 7) {
                    cout << "A Nota minima de EDUCACAO FISICA" << endl;
                    cout << "R:" << minimoCursoInteiro(notaseducacaofisica) << endl;
                }
                else if (resposta == 8) {
                    cout << "A Nota minima de FISICA E QUIMICA" << endl;
                    cout << "R:" << minimoCursoInteiro(notasfisicaequimica) << endl;
                }
                else if (resposta == 9) {
                    cout << "A Nota minima de MICROPROCESSADORES E AUTOMACAO" << endl;
                    cout << "R:" << minimoCursoInteiro(notasmicroprocessadoreseautomacao) << endl;
                }
                else if (resposta == 10) {
                    cout << "A Nota minima de REDES" << endl;
                    cout << "R:" << minimoCursoInteiro(notasredes) << endl;
                }
                else if (resposta == 11) {
                    cout << "A Nota minima de EDUCACAO MORAL E RELIGIOSA" << endl;
                    cout << "R:" << minimoCursoInteiro(notaseducacaomoralereligiosa) << endl;
                }
            } while (resposta = 0);
            break;

        case 5:
            cout << "A Nota Mais Elevada do Curso e " << endl;
            cout << "R: " << maximo << endl;
            break;

        case 6:
            cout << "A Nota Mais Baixa do Curso e " << endl;
            cout << "R: " << minimo << endl;
            break;

        case 7:
            cout << "A media do curso inteiro e: " << endl;
            cout << "R:" << media << endl;
            break;
        }
    } while (resposta != 0);





    return 0;


}

