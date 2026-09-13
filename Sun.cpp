#include "Sun.hpp"

#include <iostream>
using std::cout;
using std::endl;

Sun::Sun(string fname) : ASCIIPicture("./sun/" + fname + ".sun")
{
}

Sun::~Sun() {}

void Sun::print(unsigned int left, char fill, unsigned int width)
{
    for (int i = 0; i < picture.size(); i++)
    {
        
//        for (int j = 0; j < left; j++)
//            cout << fill;
        
        for (int j = 0; j < picture[i].size(); j++)
            cout << picture[i][j];
    
        cout << endl;
    }
    for (int i = 0; i < width; i++)
        cout << fill;

    cout << endl;
}
