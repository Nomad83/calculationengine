#ifndef CALCULATORAPI_H
#define CALCULATORAPI_H

#include <string>
#include <list>

using namespace std;

class CalculatorAPI
{
    public:
        static int multipyAll(string filename);
        static int divideAll(string filename);
        static int divideAll(list<int> *arr);

    protected:

    private:
};

#endif // CALCULATORAPI_H
