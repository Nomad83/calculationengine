#include <fstream>
#include "Engine.h"

Engine::Engine()
{
    //ctor
}

Engine::~Engine()
{
    //dtor
}

void Engine::SetInputType(string val)
{
    if (val.compare("file") == 0)
    {
        m_enInputType = fileInput;
    }
    else if (val.compare("manual") == 0)
    {
        m_enInputType = manualInput;
    }
    else
    {
        m_enInputType = invalidInput;
    }
}

void Engine::populate(string filename)
{
    if (m_enInputType != fileInput)
        return;

    ifstream ifile;
    string filestr = filename + ".txt";
    ifile.open(filestr.c_str());

    int i;

    while (ifile >> i)
    {
        m_list.push_back(i);
    }
}

void Engine::populate(list<int> *arr)
{
    if (m_enInputType != manualInput)
        return;

    list<int>::iterator iter;

    for (iter=arr->begin(); iter!=arr->end(); ++iter)
    {
        m_list.push_back(*iter);
    }
}
