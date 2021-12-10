#pragma once
#include<iostream>
using namespace std;
class Shape {
private:double S;
	    
public:void setS(double value);
	  double getS();
};


class Circle:public Shape {
private:double r;
public:Circle(double value);
};


class Square :public Shape {
private:double side;
public:Square(double value);
};


class Rectangle :public Shape {
private:double width;
	   double lenth;
public:Rectangle(double value1, double value2);

};


class Trapezoid :public Shape {
private:double upside;
	   double downside;
	   double height;
public:Trapezoid(double value1, double value2, double value3);
	
};


class Triangle :public Shape {
private:double side1;
	   double side2;
	   double side3;
public:Triangle(double value1, double value2, double value3);
};