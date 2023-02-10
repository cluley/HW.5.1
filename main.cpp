#include <iostream>

class Figure {
public:
	Figure( int sides_ = 0 ) { sides = sides_; }
	int get_sides() { return sides; }
	std::string get_intro() { return intro; }
protected :
	int sides;
	std::string intro = "Фигура: ";
};

class Triangle : public Figure {
public:
	Triangle() { intro = "Треугольник: "; sides = 3; }
};

class Quadrangle : public Figure {
public:
	Quadrangle() { intro = "Четырехугольник: "; sides = 4; }
};

int main(int argc, char** argv) {
	Figure unknown;
	Triangle triangle;
	Quadrangle quadrangle;

	std::cout << "Колличество сторон: " << std::endl;
	std::cout << unknown.get_intro() << unknown.get_sides() << std::endl;
	std::cout << triangle.get_intro() << triangle.get_sides() << std::endl;
	std::cout << quadrangle.get_intro() << quadrangle.get_sides() << std::endl;

	return 0;
}