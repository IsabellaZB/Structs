#include <iostream>
using namespace std;
#include <time.h>

template <int L, int C, typename Tipo>
struct Estrutura {
  Tipo mat[L][C];
  Tipo vetl[L];
  Tipo vetc[C];
};

template <int L, int C, typename Tipo> 
void preenche(Estrutura<L, C, Tipo> &a) {
  cout << endl << endl;
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
   a.mat[i][j] = rand() % 9 + 1;
    }
  }
}
template <int L, int C, typename Tipo> 
void mostra(Estrutura<L, C, Tipo> &a) {
  cout <<"Matriz:"<<endl;
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
   cout<< a.mat[i][j]<<"\t";
    }
    cout<<endl;
  }
}

template <int L, int C, typename Tipo> 
void vetor_linhas(Estrutura<L, C, Tipo> &l) {
  cout << endl << endl;
  cout << endl << "Vetor de Linhas:" << endl;
  for (int i = 0; i < L; i++) {
     l.vetl[i] = 0;
    for (int j = 0; j < C; j++) {
      l.vetl[i] += l.mat[i][j];
        }
        cout << l.vetl[i] <<"\t";
    }
}
template <int L, int C, typename Tipo> 
void vetor_colunas(Estrutura<L, C, Tipo> &c) {
  cout << endl << endl;
  cout << endl << "Vetor de Colunas:" << endl;
  for (int j = 0; j < L; j++) {
    c.vetc[j] = 0;
    for (int i = 0; i < C; i++) {
    c.vetc[j] += c.mat[i][j];
    }
    cout << c.vetc[j]<< "\n";
  }
}

int main() {
  
  srand(time(NULL));
  Estrutura<3, 3, int> m1;

 preenche(m1);
 mostra(m1);
 vetor_linhas(m1);
 vetor_colunas(m1);

  
}   

/*Programa que possua uma struct , e nesta struct uma matriz, um vetor de linhas e um vetor de 
**colunas. Faça um programa que preencha de forma aleatória esta matriz, e preencha o vetor de 
**linhas com a soma de cada linha, e o de colunas com a soma de cada coluna. */