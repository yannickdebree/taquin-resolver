#include "Taquin.h"
#include <iostream>
#include <vector>
#include <math.h>

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
    int modificationsCount = 0;
    for(int i = 0; i < (casesNumber - 1); ++i)
    {
        if(casesMixed[i] + 1 != casesMixed[i + 1])
        {
            ++modificationsCount;
        }
    }
    if(modificationsCount%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Taquin::initItSelf()
{
    casesNumber = pow(dimensions, 2);
    int i = 0;
    while(++i < casesNumber + 1){
        cases.push_back(i);
    }
}

void Taquin::mixItSelf()
{
    casesMixed = cases;
    int nbrMix = rand() % 100;
    cout << nbrMix << endl;
    for(int i = 0 ; i < nbrMix; ++i)
    {
        int randomKey1 = rand() % casesNumber;
        int randomKey2 = rand() % casesNumber;
        int buffer = casesMixed[randomKey1];
        casesMixed[randomKey1] = casesMixed[randomKey2];
        casesMixed[randomKey2] = buffer;
    }
    showItSelfMixed();
}

void Taquin::showItSelf()
{
    cout << "Taquin in intial state: " << endl;
    for(int i = 0; i < casesNumber; ++i)
    {
        cout << cases[i];
        if((i + 1)%dimensions == 0)
        {
            cout << endl;
        }
    }
}

void Taquin::showItSelfMixed()
{
    cout << "Taquin in mixed state: " << endl;
    for(int i = 0; i < casesNumber; ++i)
    {
        cout << casesMixed[i];
        if((i + 1)%dimensions == 0)
        /**
         * Example when dimensions = 3 and i = 2 :
         * (2 + 1) % 3 = 3 % 3 == 0
         */
        {
            cout << endl;
        }
    }
}
