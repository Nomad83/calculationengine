#ifndef ENUMERATIONS_H
#define ENUMERATIONS_H

enum CalcType_t{
    multiplier,
    divider,
    invalidCalc
} ;

enum InputType_t{
    fileInput,
    manualInput,
    invalidInput
} ;

typedef enum CalcType_t tenCalcType;
typedef enum InputType_t tenInputType;

#endif // ENUMERATIONS_H
