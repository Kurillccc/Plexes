#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

enum Figura { point, line, rec };

class Base {
protected:

    Figura figura;
    string name;
    int width;
    int collision;
    int rate;
    int color;

public:

    Base(Figura figura_, string now_, int width = 3)
    {
        figura = figura_;
        name = now_;
        collision = 0;
        rate = 0;
        color = 0;
    }
    Base(const Base& tmp)
    {
        figura = tmp.figura;
        name = tmp.name;
        collision = tmp.rate;
        rate = tmp.rate;
        color = tmp.color;
    }
    Base& operator=(const Base& tmp)
    {
        figura = tmp.figura;
        name = tmp.name;
        width = tmp.width;
        collision = tmp.collision;
        rate = tmp.rate;
        color = tmp.color;

        return *this;
    }

    virtual ~Base();
    virtual void Draw() = 0;
    virtual void Move(int dx = 0, int dy = 0) = 0;
    virtual void SetRate(int R = 0) = 0;

    Figura GetF()
    {
        return figura;
    }
    std::string GetName()
    {
        return name;
    }
    int GetRate()
    {
        return rate;
    }
    void SetWidth(int tmp)
    {
        width = tmp;
    }

    string col_to_str(int color)
    {
        return to_string(color);
    }
};

Base::~Base() {}