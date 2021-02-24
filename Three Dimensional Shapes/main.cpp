#include "TwoDimensionalShape.h"
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
/*
Input radius of the sphere:
5.1
Input radius of the cone:
3.6
Input height of the cone:
4.8
Input radius of the cylinder:
10.3
Input the height of the cylinder:
6.2

Here are the sphere's properties:
Radius: 5.1
Surface Area: 326.851
Volume: 555.647
Here are the cone's properties:
Radius: 3.6
Height: 4.8
Surface Area: 67.8584
Volume: 65.1441
Here are the cylinder's properties:
Radius: 10.3
Height: 6.2
Surface Area: 401.244
Volume: 2066.41

--- SPHERE ---
Geometric Figure Name: Sphere
Color: Pink
Geometric Figure Name: Sphere
Color: Pink
Surface Area: 326.851
Volume: 555.647
--- CONE ---
Geometric Figure Name: Cone
Color: Black
Geometric Figure Name: Cone
Color: Black
Surface Area: 67.8584
Volume: 65.1441
--- CYLINDER ---
Geometric Figure Name: Cylinder
Color: Purple
Geometric Figure Name: Cylinder
Color: Purple
Surface Area: 401.244
Volume: 2066.41
Press any key to continue . . .
ThreeDimFigures destructor
Geometric Figure Name: Cylinder
Color: Purple
Surface Area: 401.244
Volume: 2066.41
Press any key to continue . . .
ThreeDimensionalShape destructor
Geometric Figure Name: Cylinder
Color: Purple
Surface Area: 401.244
Volume: 2066.41
Press any key to continue . . .
Shape destructor
Geometric Figure Name: Cylinder
Color: Purple
Press any key to continue . . .
*/
