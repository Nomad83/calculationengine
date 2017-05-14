#include "DividerEngine.h"

DividerEngine::DividerEngine()
{
    m_enCalcType = divider;
}

DividerEngine::~DividerEngine()
{
    //dtor
}

int DividerEngine::calculate()
{
    list<int> *pList = getListIntegers();

    if (pList->empty())
        return 0;

    int result = pList->front();

    list<int>::iterator iter = pList->begin();
    ++iter;

    while (iter!=pList->end())
    {
        int val = *iter;
        result /= val;
        ++iter;
    }

    return result;
}
