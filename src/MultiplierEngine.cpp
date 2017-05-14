#include "MultiplierEngine.h"

MultiplierEngine::MultiplierEngine()
{
    m_enCalcType = multiplier;
}

MultiplierEngine::~MultiplierEngine()
{
    //dtor
}

int MultiplierEngine::calculate()
{
    list<int> *pList = getListIntegers();

    if (pList->empty())
        return 0;

    int result = 1;

    list<int>::iterator iter;

    for (iter=pList->begin(); iter!=pList->end(); ++iter)
    {
        result *= *iter;
    }

    return result;
}
