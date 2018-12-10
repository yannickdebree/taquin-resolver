#include "Taquin.h"
#include <iostream>
#include <vector>

using namespace std;

Taquin::Taquin()
{
    dimensions = 3;
    initItSelf();
}

Taquin::Taquin(int d = 3)
{
    dimensions = d;
    initItSelf();
}

bool Taquin::isResolvable()
{
    return true;
}

void Taquin::initItSelf()
{
    int casesLength = 0;
    for(int x = 0; x < dimensions; ++x)
    {
        cases.push_back(vector<int>(dimensions));
        for(int y = 0; y < dimensions; ++y){
            if((x != (dimensions - 1)) || (y != (dimensions - 1)))
            {
                ++casesLength;
                cases[x][y] = casesLength;
            }
        }
    }
}

void Taquin::mixItSelf(){
    int nbrMix = rand() % 100;
    cout << nbrMix << endl;
}

void Taquin::showItSelf()
{
    for(int x = 0; x < dimensions; ++x){
        for(int y = 0; y < dimensions; ++y){
            cout << cases[x][y];
        }
        cout << endl;
    }
}
