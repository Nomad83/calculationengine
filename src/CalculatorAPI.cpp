#include "CalculatorAPI.h"
#include "EngineFactory.h"

int CalculatorAPI::multipyAll(list<string> *filenames)
{
    Engine *pEngine = EngineFactory::generateEngine("multiplier", "file");

    pEngine->populate(filenames);

    int result = pEngine->calculate();

    delete pEngine;

    return result;
}

int CalculatorAPI::divideAll(list<string> *filenames)
{
    Engine *pEngine = EngineFactory::generateEngine("divider", "file");

    pEngine->populate(filenames);

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
