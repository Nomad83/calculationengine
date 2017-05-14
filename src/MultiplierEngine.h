#ifndef MULTIPLIERENGINE_H
#define MULTIPLIERENGINE_H

#include "Engine.h"


class MultiplierEngine : public Engine
{
    public:
        MultiplierEngine();
        virtual ~MultiplierEngine();

        int calculate();

    protected:

    private:
};

#endif // MULTIPLIERENGINE_H
