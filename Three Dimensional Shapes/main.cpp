#include "ThreeDimensionalShape.h"
#include "Shape.h"
#include "ThreeDimFigures.h"
int main() {
	// THREE DIMENSIONAL SHAPES --- SPHERE, CONE, CYLINDER
	Shape shape1;
	Shape* shapeptr = nullptr;
	ThreeDimensionalShape ThreeDimensionalShape1;
	ThreeDimensionalShape* ThreeDimensionalShapePtr = nullptr;

	double radius1, radius2, radius3, height1, height2;
	cout << "Input radius of the sphere: " << endl; // input for sphere
	cin >> radius1;
	cout << "Input radius of the cone: " << endl; // input for cone
	cin >> radius2;
	cout << "Input height of the cone: " << endl;
	cin >> height1;
	cout << "Input radius of the cylinder: " << endl; // input for cylinder
	cin >> radius3;
	cout << "Input the height of the cylinder: " << endl;
	cin >> height2;

	ThreeDimFigures sphere(radius1, "Sphere", "Pink"); // radius, figure, color parameter
	ThreeDimFigures cone(radius2, height1, "Cone", "Black"); // radius, height, figure, color parameter
	ThreeDimFigures cyl(radius3, height2, "Cylinder", "Purple");
	cout << endl;
	sphere.displaySphere();
	cone.displayCone();
	cyl.displayCylinder();
	cout << endl;

	cout << "--- SPHERE ---" << endl;
	shapeptr = &sphere;
	shapeptr->display();
	ThreeDimensionalShapePtr = &sphere;
	ThreeDimensionalShapePtr->display();
	cout << "--- CONE ---" << endl;
	shapeptr = &cone;
	shapeptr->display();
	ThreeDimensionalShapePtr = &cone;
	ThreeDimensionalShapePtr->display();
	cout << "--- CYLINDER ---" << endl;
	shapeptr = &cyl;
	shapeptr->display();
	ThreeDimensionalShapePtr = &cyl;
	ThreeDimensionalShapePtr->display();

	system("pause");
	return 0;
}
