#ifndef DIVIDERENGINE_H
#define DIVIDERENGINE_H

#include "Engine.h"


class DividerEngine : public Engine
{
    public:
        DividerEngine();
        virtual ~DividerEngine();

        int calculate();

    protected:

    private:
};

#endif // DIVIDERENGINE_H
