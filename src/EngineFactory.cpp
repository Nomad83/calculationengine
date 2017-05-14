#include "EngineFactory.h"
#include "MultiplierEngine.h"
#include "DividerEngine.h"

Engine* EngineFactory::generateEngine(string calc, string input)
{
    Engine *pEngine;

    if (calc.compare("multiplier") == 0)
    {
        pEngine = new MultiplierEngine();
    }
    else if (calc.compare("divider") == 0)
    {
        pEngine = new DividerEngine();
    }

    pEngine->SetInputType(input);

    return pEngine;
}


