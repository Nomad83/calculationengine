#include "CalculatorAPI.h"
#include "EngineFactory.h"

int CalculatorAPI::multipyAll(string filename)
{
    Engine *pEngine = EngineFactory::generateEngine("multipler", "file");

    pEngine->populate(filename);

    int result = pEngine->calculate();

    delete pEngine;

    return result;
}

int CalculatorAPI::divideAll(string filename)
{
    Engine *pEngine = EngineFactory::generateEngine("divider", "file");

    pEngine->populate(filename);

    int result = pEngine->calculate();

    delete pEngine;

    return result;
}

int CalculatorAPI::divideAll(list<int> *arr)
{
    Engine *pEngine = EngineFactory::generateEngine("divider", "manual");

    pEngine->populate(arr);

    int result = pEngine->calculate();

    delete pEngine;

    return result;
}
