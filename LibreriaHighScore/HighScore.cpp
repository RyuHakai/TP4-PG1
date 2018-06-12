#include"HighScore.h"
namespace Soto {
	HighScore::HighScore() {
		_score= 0;
		_nombre = "aaa";
	}
	int HighScore::getScore() {
		return _score;
	}
	string HighScore::getNombre() {
		return _nombre;
	}
	void HighScore::setScore(int Score) {
		_score = Score;
	}
	void HighScore::setNombre(string Nombre) {
		_nombre = Nombre;
	}

}