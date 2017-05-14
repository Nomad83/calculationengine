#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <list>
#include "Enumerations.h"

using namespace std;

class Engine
{
    public:
        Engine();
        virtual ~Engine();

        tenCalcType GetCalcType() { return m_enCalcType; }
        void SetCalcType(tenCalcType val) { m_enCalcType = val; }
        tenInputType GetInputType() { return m_enInputType; }
        void SetInputType(tenInputType val) { m_enInputType = val; }
        void SetInputType(string val);
        list<int>* getListIntegers() { return &m_list; }

        virtual int calculate() = 0;

        void populate(string filename);
        void populate(list<int> *arr);

    protected:
        tenCalcType m_enCalcType;
        tenInputType m_enInputType;

    private:
        list<int> m_list;
};

#endif // ENGINE_H
