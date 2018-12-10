#include "Taquin.h"
#include <iostream>
#include <vector>

using namespace std;

Taquin::Taquin()
{
    dimensions = 3;
    initTaquin();
}

Taquin::Taquin(int d)
{
    dimensions = d;
    initTaquin();
}

void Taquin::initTaquin()
{
    int casesLength = 0;
    for(int x = 0; x < dimensions; ++x){
        cases.push_back(vector<int>(3));
        for(int y = 0; y < dimensions; ++y){
            ++casesLength;
            cases[x][y] = casesLength;
        }
    }
}

void Taquin::showTaquin()
{
    for(int x = 0; x < dimensions; ++x){
        for(int y = 0; y < dimensions; ++y){
            cout << cases[x][y];
        }
        cout << endl;
    }
}
