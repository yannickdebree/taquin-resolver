#ifndef TAQUIN_H
#define TAQUIN_H
#include <vector>

using namespace std;

class Taquin
{
    int dimensions;
    int casesNumber;
    vector<int> cases;
    vector<int> casesMixed;
    public:
        Taquin();
        Taquin(int d);
        bool isResolvable();
        void initItSelf();
        void mixItSelf();
        void showItSelf();
        void showItSelfMixed();
    protected:

    private:
};

#endif // TAQUIN_H
