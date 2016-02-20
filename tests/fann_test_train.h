#ifndef FANN_FANN_TEST_TRAIN_H
#define FANN_FANN_TEST_TRAIN_H

#include "fann_test.h"

class FannTestTrain : public FannTest {
protected:
    static fann_type xorInput[8];
    static fann_type xorOutput[4];

    virtual void SetUp();

    virtual void TearDown();
};

fann_type FannTestTrain::xorInput[8] = {
            0.0, 0.0,
            0.0, 1.0,
            1.0, 0.0,
            1.0, 1.0};
fann_type FannTestTrain::xorOutput[4] = {
            0.0,
            1.0,
            1.0,
            0.0};

#endif
