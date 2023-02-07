#include <iostream>

class Figure {
public:
	Figure( int var = 0 ) { sides = var; }
	int get_sides() { return sides; }
	std::string get_intro() { return intro; }
private:
	int sides;
	std::string intro = "Фигура: ";
};

class Triangle : public Figure {
public:
	Triangle(int var = 3):Figure(var) {}
	std::string get_intro() { return intro; }
private:
	std::string intro = "Треугольник: ";
};

class Quadrangle : public Figure {
public:
	Quadrangle(int var = 4):Figure(var) {}
	std::string get_intro() { return intro; }
private:
	std::string intro = "Четырехугольник: ";
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