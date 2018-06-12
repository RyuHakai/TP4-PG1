#include"HighScore.h"
#include <iostream>
#include "Table.h"
#define TAM 5

using namespace std;
using namespace Soto;

	HighScore* hs[TAM];
void crearTabla() {
	for (int i = 0; i < TAM; i++)
		hs[i] = new HighScore;
}

void newHighScore(string nombre, int score){
	int nextScore;
	string nextNombre;
	for (int i = 0; i < TAM; i++) {
		if (hs[i] != NULL) {
			if (score > hs[i]->getScore()) {
				nextScore = hs[i]->getScore();
				nextNombre = hs[i]->getNombre();
				hs[i]->setScore(score);
				hs[i]->setNombre(nombre);
				score = nextScore;
				nombre = nextNombre;
			}
		}		
	}
}
void MostrarScore() {
	for (int i = 0; i < TAM; i++) {
		if (hs[i] != NULL) {
			cout << hs[i]->getNombre() << "   " << hs[i]->getScore() << endl;
		}
	}
}
