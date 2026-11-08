/**
 * @file lookat.h
 */
#ifndef LOOKAT_H
#define LOOKAT_H

#include "common.h"
#include <util.h>
#include <vec.h>
#include <mat.h>
#include <alo.h>
#include <act.h>

/**
 * @brief Actor Look At (?)
 */
struct ACTLA : public ACT
{
    /* 0x1c */ int fUseTarget;
    /* 0x20 */ ALO *paloTarget;
    /* 0x24 */ STRUCT_PADDING(3);
    /* 0x30 */ VECTOR posTargetLocal;
    /* 0x40 */ float sIgnore;
    /* 0x44 */ int nPriorityEnabled;
    /* 0x48 */ int nPriorityDisabled;
    /* 0x4c */ int fPaused;
    /* 0x50 */ CLQ clqPanToPan;
    /* 0x60 */ LM lmPan;
    /* 0x68 */ STRUCT_PADDING(2);
    /* 0x70 */ CLQ clqTiltToTilt;
    /* 0x80 */ LM lmTilt;
};

void InitActla(ACTLA *pactla, ALO *palo);

void SetActlaTarget(ACTLA *pactla, ALO *paloTarget, VECTOR *pposLocal);

ALO *PaloGetActlaTarget(ACTLA *pactla);

void UpdateActla(ACTLA *pactla, float dt);

void GetActlaRotationGoal(ACTLA *pactla, float dtOffset, MATRIX3 *pmat, VECTOR *pw);

#endif // LOOKAT_H
