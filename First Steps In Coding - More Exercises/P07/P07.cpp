#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//green paint == 1 liter = 3.4m^2
	//red paint == 1 liter = 4.3m^2
	//
	//front and back walls are square with a side == x
	//side walls are rectangles with sides x and y
	//
	//front wall door == w/y = 1.2/2 m 
	//both side walls have a square window with a side 1.5m
	// 
	// roof:
	// two rectangles, sides x and y
	// two equilateral triangles with side x and height h
	// 
	// calculate the area of all walls and the roof
	
	int x, y;
	double h;
	cin >> x >> y >> h;

	double doorArea = 2.4;
	double frontWall = (x * x) - doorArea;
	
	double backWall = x * x;

	double window = 2.25;
	double sideWalls = ((x * y) - window) * 2;

	double roofTriangles = ((x * h) / 2) * 2;
	double roofRectangles = (x * y) * 2;

	double greenPaintArea = frontWall + backWall + sideWalls;
	double redPaintArea = roofRectangles + roofTriangles;

	double greenPaint = greenPaintArea / 3.4;
	double redPaint = redPaintArea / 4.3;

	cout << fixed << setprecision(2) << greenPaint << endl << redPaint << endl;
}