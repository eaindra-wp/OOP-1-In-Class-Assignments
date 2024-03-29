/*
    CH08-320142
    a6_p4_Area.h
    Eaindra Wun Pyae
    e.wunpyae@jacobs-university.de
*/
#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};
#endif
