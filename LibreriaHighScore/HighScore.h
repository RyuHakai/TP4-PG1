#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include<iostream>
#include<string>
using namespace std;

namespace Soto{
	class HighScore {
	protected:
		int _score;
		string _nombre;
	public:
		HighScore();
		int getScore();
		string getNombre();
		void setScore(int score);
		void setNombre(string nombre);
	};
}
#endif