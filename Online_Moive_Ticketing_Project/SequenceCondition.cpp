//
// Created by 김태경 on 2023/06/15.
//
#include "SequenceCondition.h"


SequenceCondition::SequenceCondition(int _sequence) {
    sequence=_sequence;
}

bool SequenceCondition::test(Screening &screening) {
    return screening.isSequence(sequence);

}


