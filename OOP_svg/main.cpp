/* <svg viewbox ="0 0 100 100" fill = "#F2F0B3">
  <rect width = "100" height = "100"/>
<circle class="st" cx="50" cy="50" r="40" fill = "#F2F0B3  " stroke = "black"/>
  <line x1 = "5" y1 = "0" x2 = "70" y2 = "10" stroke = "black"/>
  <line x1 = "10" y1 = "30" x2 = "4" y2 = "80" stroke = "black"/>
  <line x1 = "90" y1 = "30" x2 = "4" y2 = "80" stroke = "black"/>
  <line x1 = "40" y1 = "90" x2 = "100" y2 = "100" stroke = "black"/>
 
  <polygon points = "0,100 35,100 100,0  80,0" fill = "#B0D224"/>
  <polygon points = "100,80 80,100 0,0  20,0" fill = "blue"/>
  
  <circle class="st" cx="50" cy="45" r="10" fill = "red"/>
  <circle class="st" cx="45" cy="60" r="15" fill = "green"/>
  <circle class="st" cx="66" cy="55" r="12" fill = "#5990D8"/>
  <circle class="st" cx="40" cy="55" r="5" fill = "red"  stroke = "black"/>
  <circle class="st" cx="40" cy="55" r="1" fill = "black"/>
  <circle class="st" cx="30" cy="70" r="10" fill = "#CCFFCC"/>
  
  <line x1 = "60" y1 = "45" x2 = "80" y2 = "25" stroke = "black"/>
  
</svg> */

#include <iostream>
#include <fstream>

using namespace std;

struct Figure
{
	string fill;
};

struct Figure
{
	string fill;
};

struct Circle :Figure
{
	double x;
	double y;
	double r;
	string stroke;
};

struct Polygon :Figure 
{
	unsigned N = 4;

	double* arr_y{ new double[N] };
	double* arr_x{ new double[N] };

};

struct Line: Figure
{
	double x;
	double y;

	double x2;
	double y2;
};

ostream& operator<<(std::ostream& out, const Polygon& p)
{

	return out << "<polygon points =\"" << p.arr_x[0] << "," << p.arr_y[0] << " " << p.arr_x[1] << "," << p.arr_y[1] << " " << p.arr_x[2] << "," << p.arr_y[2] << " " << p.arr_x[3] << "," << p.arr_y[3] << "\"" << " fill = " << "\"" << p.fill << "\"/>" << '\n';
}

ostream& operator<<(std::ostream& out, const Circle& c)
{

	return out << "<circle cx=\"" << c.x << "\" cy=\"" << c.y << "\" r=\"" << c.r << "\"" << " fill=\"" << c.fill << "\"" << " stroke=\"" << c.stroke << "\"/>" << '\n';
}

ostream& operator<<(std::ostream& out, const Line& l)
{

	return out << "<line x1=\"" << l.x << "\" y1=\"" << l.y << "\" x2=\"" << l.x2 << "\" y2 =\"" << l.y2<<"\" stroke=\"" << l.fill << "\"/>" << '\n';
	//<line x1 = "40" y1 = "90" x2 = "100" y2 = "100" stroke = "black" / >
}


int main()
{
	ofstream svg("picture.svg");

	Circle c1;
	c1.x = 50;
	c1.y = 50;
	c1.r = 40;
	c1.fill = "#F2F0B3";
	c1.stroke = "#000000";

	Circle c2;
	c2.x = 50;
	c2.y = 45;
	c2.r = 10;
	c2.fill = "#FF0000";
	c2.stroke = "#FF0000";

	Circle c3;
	c3.x = 45;
	c3.y = 60;
	c3.r = 15;
	c3.fill = "#00ff00";
	c3.stroke = "#00ff00";

	Circle c4;
	c4.x = 66;
	c4.y = 55;
	c4.r = 12;
	c4.fill = "#5990D8";
	c4.stroke = "#5990D8";

	Circle c5;
	c5.x = 40;
	c5.y = 55;
	c5.r = 5;
	c5.fill = "#FF0000";
	c5.stroke = "#000000";

	Circle c6;
	c6.x = 40;
	c6.y = 55;
	c6.r = 1;
	c6.fill = "#000000";

	Circle c7;
	c7.x = 30;
	c7.y = 70;
	c7.r = 10;
	c7.fill = "#CCFFCC";
	c7.stroke = "#CCFFCC";

	Line l1;
	l1.x = 5;
	l1.y = 0;
	l1.x2 = 70;
	l1.y2 = 10;
	l1.fill = "#000000";

	Line l2;
	l2.x = 10;
	l2.y = 30;
	l2.x2 = 4;
	l2.y2 = 80;
	l2.fill = "#000000";

	Line l3;
	l3.x = 90;
	l3.y = 30;
	l3.x2 = 4;
	l3.y2 = 80;
	l3.fill = "#000000";

	Line l4;
	l4.x = 40;
	l4.y = 90;
	l4.x2 = 100;
	l4.y2 = 100;
	l4.fill = "#000000";
	

	Polygon p1; //"0,100 35,100 100,0  80,0" fill = "#B0D224" / >

	p1.arr_x[0] = 0;
	p1.arr_x[1] = 35;
	p1.arr_x[2] = 100;
	p1.arr_x[3] = 80;

	p1.arr_y[0] = 100;
	p1.arr_y[1] = 100;
	p1.arr_y[2] = 0;
	p1.arr_y[3] = 0;
	p1.fill = "#B0D224";

	Polygon p2;
	p2.arr_x[0] = 100;
	p2.arr_x[1] = 80;
	p2.arr_x[2] = 0;
	p2.arr_x[3] = 20;

	p2.arr_y[0] = 80;
	p2.arr_y[1] = 100;
	p2.arr_y[2] = 0;
	p2.arr_y[3] = 0;
	p2.fill = "#0000FF";

	if (svg.is_open()) {
		svg << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"100\" height=\"100\" viewBox=\"0 0 100 100\" fill=\"#F2F0B3\">" << std::endl;

		svg << c1;

		svg << p1;
		svg << p2;

		svg << l1;
		svg << l2;
		svg << l3;
		svg << l4;

		svg << c2;
		svg << c3;
		svg << c4;
		svg << c5;
		svg << c6;
		svg << c7;

		svg << "</svg>";
	}
}
