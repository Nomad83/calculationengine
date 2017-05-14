#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include <string>
#include "Engine.h"

using std::string;

class EngineFactory
{
    public:

        static Engine* generateEngine(string calc, string input);

    protected:

    private:
};

#endif // ENGINEFACTORY_H
