#ifndef ENGINE_H
#define ENGINE_H

#include "Enumerations.h"

class Engine
{
    public:
        Engine();
        virtual ~Engine();

        tenCalcType GetCalcType() { return m_enCalcType; }
        void SetCalcType(tenCalcType val) { m_enCalcType = val; }
        tenInputType GetInputType() { return m_enInputType; }
        void SetInputType(tenInputType val) { m_enInputType = val; }

        virtual int calculate() = 0;

    protected:

    private:
        tenCalcType m_enCalcType;
        tenInputType m_enInputType;
};

#endif // ENGINE_H
