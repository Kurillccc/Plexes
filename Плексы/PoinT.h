#pragma once

#include "Base.h"
#include "s_to_w.h"

class Pointer : public Base {
private:

	int x, y;

public:

	Pointer(Figura figura_, string now_, int width = 5, string _name, int _x = 0, int _y = 0) : Base(figura_, now_, width)
	{
		figura = point;

		x = _x;
		y = _y;
	}
	Pointer(const Pointer& tmp) : Base(tmp)
	{
		figura = tmp.figura;
		name = tmp.name;
		collision = tmp.collision;
		rate = tmp.rate;
		color = tmp.color;

		x = tmp.x;
		y = tmp.y;
	}
	Pointer& operator=(const Pointer& tmp)
	{
		figura = tmp.figura;
		name = tmp.name;
		collision = tmp.collision;
		rate = tmp.rate;
		color = tmp.color;

		x = tmp.x;
		y = tmp.y;

		return *this;
	}

	void Draw(System::Drawing::Graphics^ g)
	{
		int tmp = color;
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::FromArgb(tmp));
		g->FillEllipse(brush, x, y, width, width);
	}
	void Move(int dx = 0, int dy = 0)
	{
		x += dx;
		y += dy;
	}
	void SetRate(int n)
	{
		if (n < 0) { rate -= 1; }
		else { rate += 1; }
	}

	string PointToString() 
	{
		string Res = "pointer |" + name + "|" + to_string(width) + "|" + col_to_str(color) + "|" + to_string(rate) + "|" + to_string(x) + "|" + to_string(y);
		return Res;
	}
};