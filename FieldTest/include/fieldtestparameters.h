#ifndef FIELDTEST_PARAMETERS_H
#define FIELDTEST_PARAMETERS_H

#include <parameters.h>

#include <types.h>
#include <string>

// DO NOT MODIFY - This file is automatically generated during compilation.

class FieldTestParameters : public Parameters {
  public:
    FieldTestParameters() : Parameters(1){
      mAmplitude = 1.0;
    }

    inline void setAmplitude(double Amplitude){
      mAmplitude = Amplitude;
    }

    inline double getAmplitude(){
      return mAmplitude;
    }

  private:
    double mAmplitude;
};

#endif
