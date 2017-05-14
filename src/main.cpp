#include <iostream>
#include <stdlib.h>
#include "CalculatorAPI.h"

using namespace std;

bool is_digit(string &str);

int main(int argc,  char* argv[])
{
    int list_size = argc - 2;
    string engine_str;
    string input_str;
    list<string> filenames;
    list<int> digits;

    int result = 0;

    bool boInvalidArgs = false;

    if (argc > 1)
    {
        engine_str = argv[1];

        if (engine_str.compare("multiplier") == 0)
        {
            if (list_size > 0)
            {
                for (int i=0; i<list_size; ++i)
                {
                    string file_str = argv[i+2];

                    if (!is_digit(file_str))
                    {
                        filenames.push_back(file_str);
                    }
                    else
                    {
                        boInvalidArgs = true;
                        break;
                    }
                }

                if (!filenames.empty() && !boInvalidArgs)
                {
                    input_str = "files";

                    result = CalculatorAPI::multipyAll(&filenames);
                }
                else
                {
                    boInvalidArgs = true;
                }
            }
            else
            {
                boInvalidArgs = true;
            }
        }
        else if (engine_str.compare("divider") == 0)
        {

            if (list_size > 0)
            {
                string first_str = argv[2];

                if (!is_digit(first_str))
                {
                    for (int i=0; i<list_size; ++i)
                    {
                        string file_str = argv[i+2];
                        if (!is_digit(file_str))
                        {
                            filenames.push_back(file_str);
                        }
                        else
                        {
                            boInvalidArgs = true;
                            break;
                        }
                    }

                    if (!filenames.empty() && !boInvalidArgs)
                    {
                        input_str = "files";

                        result = CalculatorAPI::divideAll(&filenames);
                    }
                    else
                    {
                        boInvalidArgs = true;
                    }
                }
                else
                {
                    for (int i=0; i<list_size; ++i)
                    {
                        string val_str = argv[i+2];
                        if (is_digit(val_str))
                        {
                            int value = atoi(val_str.c_str());
                            digits.push_back(value);
                        }
                        else
                        {
                            boInvalidArgs = true;
                            break;
                        }
                    }

                    if (!digits.empty() && !boInvalidArgs)
                    {
                        input_str = "integers";

                        result = CalculatorAPI::divideAll(&digits);
                    }
                    else
                    {
                        boInvalidArgs = true;
                    }
                }
            }
            else
            {
                boInvalidArgs = true;
            }
        }
        else
        {
            boInvalidArgs = true;
        }
    }
    else
    {
        boInvalidArgs = true;
    }

    if (!boInvalidArgs)
    {
        cout << "=== Simple Calculator ===" << endl;
        cout << "engine:=" << engine_str << " input:=" << input_str << endl;
        cout << "Result = " << result << endl;
    }
    else
    {
        cout << "Error: invalid command" << endl;
        cout << "Usage: CalculationEngine <engine_type> <file_list / integer_list>" << endl;
    }

    return 0;
}

bool is_digit(string &str)
{
    return str.find_first_not_of("0123456789") == string::npos;
}
