#include <act.h>
#include <alo.h>
#include <aseg.h>
#include <math.h>
#include <memory.h>
#include <shadow.h>
#include <shd.h>
#include <target.h>
#include <lookat.h>
#include <util.h>
#include <sound.h>

extern VTACT g_vtact;
extern VTACT g_vtactadj; // TODO: ACTADJ has it's own vtable.
extern VTACT g_vtactseg; // TODO: ACTSEG has it's own vtable.
extern VTACT g_vtactla;  // TODO: ACTLA has it's own vtable.
extern SHADOW s_shadow;
extern VECTOR D_00248D30; // Zero vector, default throb color

INCLUDE_ASM("asm/nonmatchings/P2/alo", FIsZeroV__FP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FIsZeroW__FP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FIsZeroDv__FP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FIsZeroDw__FP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", InitAlo__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", AddAloHierarchy__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", OnAloAdd__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RemoveAloHierarchy__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", OnAloRemove__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UpdateAloOrig__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloParent__FP3ALOT0);

INCLUDE_ASM("asm/nonmatchings/P2/alo", ApplyAloProxy__FP3ALOP5PROXY);

INCLUDE_ASM("asm/nonmatchings/P2/alo", BindAlo__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PostAloLoad__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PostAloLoadCallback__FP3ALO5MSGIDPv);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SnipAloObjects__FP3ALOiP4SNIP);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UpdateAloHierarchy__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UpdateAlo__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", InvalidateAloLighting__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UpdateAloXfWorld__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UpdateAloXfWorldHierarchy__FP3ALO);

void PresetAloAccel(ALO *palo, float dt)
{
    return;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", ProjectAloTransform__FP3ALOfi);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PredictAloTransform__FP3ALOT0fP6VECTORP7MATRIX3T3T3);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PredictAloTransformAdjust__FP3ALOT0fP6VECTORP7MATRIX3T3T3);

INCLUDE_ASM("asm/nonmatchings/P2/alo", DupAloRo__FP3ALOP2ROT1);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RenderFastShadow__FP3ALOP2CMP2RO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RenderAloAll__FP3ALOP2CMP2RO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RenderAloSelf__FP3ALOP2CMP2RO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RenderAloGlobset__FP3ALOP2CMP2RO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RenderAloLine__FP3ALOP2CMP6VECTORT2ff);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloOverrideCel__FP3ALOG4RGBA);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_00126ab0);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UpdateAloThrob__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloBlotContext__FP3ALOP4BLOT);

INCLUDE_ASM("asm/nonmatchings/P2/alo", EnsureAloFader__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FadeAloIn__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FadeAloOut__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", AdjustAloRtckMat__FP3ALOP2CM4RTCKP6VECTORP7MATRIX4);

INCLUDE_ASM("asm/nonmatchings/P2/alo", CloneAloHierarchy__FP3ALOT0);

INCLUDE_ASM("asm/nonmatchings/P2/alo", CloneAlo__FP3ALOT0);

INCLUDE_ASM("asm/nonmatchings/P2/alo", HandleAloMessage__FP3ALO5MSGIDPv);

INCLUDE_ASM("asm/nonmatchings/P2/alo", TranslateAloToPos__FP3ALOP6VECTOR);

JUNK_ADDIU(20);
JUNK_ADDIU(20);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RotateAloToMat__FP3ALOP7MATRIX3);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloVelocityVec__FP3ALOP6VECTOR);

void SetAloVelocityXYZ(ALO *palo, float x, float y, float z)
{
    VECTOR vec;
    vec.x = x;
    vec.y = y;
    vec.z = z;
    palo->pvtalo->pfnSetAloVelocityVec(palo, &vec);
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloAngularVelocityVec__FP3ALOP6VECTOR);

void SetAloAngularVelocityXYZ(ALO *palo, float x, float y, float z)
{
    VECTOR vec;
    vec.x = x;
    vec.y = y;
    vec.z = z;
    palo->pvtalo->pfnSetAloAngularVelocityVec(palo, &vec);
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloVelocityLocal__FP3ALOP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", GetAloVelocityLocal__FP3ALOP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", MatchAloOtherObject__FP3ALOT0);

INCLUDE_ASM("asm/nonmatchings/P2/alo", CalculateAloMovement__FP3ALOT0P6VECTORN42);

INCLUDE_ASM("asm/nonmatchings/P2/alo", CalculateAloTransform__FP3ALOT0iP6VECTORP7MATRIX3T3T3);

INCLUDE_ASM("asm/nonmatchings/P2/alo", CalculateAloTransformAdjust__FP3ALOT0P6VECTORP7MATRIX3T2T2);

INCLUDE_ASM("asm/nonmatchings/P2/alo", ConvertAloPos__FP3ALOT0P6VECTORT2);

INCLUDE_ASM("asm/nonmatchings/P2/alo", ConvertAloVec__FP3ALOT0P6VECTORT2);

INCLUDE_ASM("asm/nonmatchings/P2/alo", ConvertAloMat__FP3ALOT0P7MATRIX3T2);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FDrivenAlo__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", RetractAloDrive__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", ConvertAloMovement__FP3ALOT0P6VECTORN82);

INCLUDE_ASM("asm/nonmatchings/P2/alo", CalculateAloDrive__FP3ALOP3CLQP2LMffPfN25);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FGetAloChildrenList__FP3ALOPv);

ACTSEG *PactsegNewAlo(ALO *palo)
{
    return (ACTSEG *)PactNew(palo->psw, palo, &g_vtactseg);
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", LoadAloFromBrx__FP3ALOP18CBinaryInputStream);

INCLUDE_ASM("asm/nonmatchings/P2/alo", LoadAloAloxFromBrx__FP3ALOP18CBinaryInputStream);

INCLUDE_ASM("asm/nonmatchings/P2/alo", BindAloAlox__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", AdjustAloRotation__FP3ALOP7MATRIX3P6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", UnadjustAloRotation__FP3ALOP7MATRIX3);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloInitialVelocity__FP3ALOP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloInitialAngularVelocity__FP3ALOP6VECTOR);

ASEGD *PasegdEnsureAlo(ALO *palo)
{
    ASEGD *&pasegd = palo->pasegd;

    if (!pasegd)
    {
        pasegd = (ASEGD *)PvAllocSwClearImpl(sizeof(ASEGD));

        pasegd->oidAseg = OID_Nil;
        pasegd->iak = IAK_Time;
        pasegd->tLocal = 0.0f;
        pasegd->svtLocal = 1.0f;
    }

    return pasegd;
}

void SetAloFastShadowRadius(ALO *palo, float sRadius)
{
    palo->sFastShadowRadius = sRadius * 0.01f;
}

void GetAloFastShadowRadius(ALO *palo, float *psRadius)
{
    *psRadius = palo->sFastShadowRadius * 100.0f;
}

void SetAloFastShadowDepth(ALO *palo, float sDepth)
{
    palo->sFastShadowDepth = sDepth * 0.01f;
}

void GetAloFastShadowDepth(ALO *palo, float *psDepth)
{
    *psDepth = palo->sFastShadowDepth * 100.0f;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", PshadowAloEnsure__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloCastShadow__FP3ALOi);

void SetAloShadowShader(ALO *palo, OID oidShdShadow)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowShader(pshadow, oidShdShadow);
}

void SetAloShadowNearRadius(ALO *palo, float sNearRadius)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowNearRadius(pshadow, sNearRadius);
}

void SetAloShadowFarRadius(ALO *palo, float sFarRadius)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowFarRadius(pshadow, sFarRadius);
}

void SetAloShadowNearCast(ALO *palo, float sNearCast)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowNearCast(pshadow, sNearCast);
}

void SetAloShadowFarCast(ALO *palo, float sFarCast)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowFarCast(pshadow, sFarCast);
}

void SetAloShadowConeAngle(ALO *palo, float degConeAngle)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowConeAngle(pshadow, degConeAngle);
}

void SetAloShadowFrustrumUp(ALO *palo, VECTOR *pvecUp)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    SetShadowFrustrumUp(pshadow, pvecUp);
}

void SetAloDynamicShadowObject(ALO *palo, OID oidDysh)
{
    SHADOW *pshadow = PshadowAloEnsure(palo);
    STRUCT_OFFSET(pshadow, 0xb0, OID) = oidDysh; // pshadow->oidDysh
}

SHADOW *PshadowInferAlo(ALO *palo)
{
    if (palo->pshadow)
    {
        return palo->pshadow;
    }

    InitShadow(&s_shadow);
    return &s_shadow;
}

void GetAloCastShadow(ALO *palo, int *pfCastShadow)
{
    *pfCastShadow = (palo->pshadow != NULL);
}

void GetAloShadowShader(ALO *palo, OID *poidShdShadow)
{
    if (palo->pshadow && palo->pshadow->pshd)
    {
        *poidShdShadow = (OID)palo->pshadow->pshd->oid;
    }
    else
    {
        *poidShdShadow = OID_Nil;
    }
}

void GetAloShadowNearRadius(ALO *palo, float *psNearRadius)
{
    SHADOW *pshadow = PshadowInferAlo(palo);
    *psNearRadius = pshadow->sNearRadius;
}

void GetAloShadowFarRadius(ALO *palo, float *psFarRadius)
{
    SHADOW *pshadow = PshadowInferAlo(palo);
    *psFarRadius = pshadow->sFarRadius;
}

void GetAloShadowNearCast(ALO *palo, float *psNearCast)
{
    SHADOW *pshadow = PshadowInferAlo(palo);
    *psNearCast = pshadow->sNearCast;
}

void GetAloShadowFarCast(ALO *palo, float *psFarCast)
{
    SHADOW *pshadow = PshadowInferAlo(palo);
    *psFarCast = pshadow->sFarCast;
}

void GetAloShadowConeAngle(ALO *palo, float *pdegConeAngle)
{
    const float RAD_TO_DEG = 57.295776f;
    SHADOW *pshadow = PshadowInferAlo(palo);
    *pdegConeAngle = atan2f(pshadow->sNearRadius / pshadow->sNearCast, 1.0f) * RAD_TO_DEG * 2.0f;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", GetAloShadowFrustrumUp__FP3ALOP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", GetAloEuler__FP3ALOP6VECTOR);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloEuler__FP3ALOP6VECTOR);

void EnsureAloActRestore(ALO *palo)
{
    if (!palo->pactRestore)
    {
        ACT *pact = PactNew(palo->psw, palo, &g_vtact);
        palo->pactRestore = pact;
        InsertAloAct(palo, pact);
    }
}

void EnsureAloActla(ALO *palo)
{
    if (!palo->pactla)
    {
        ACTLA *pactla = (ACTLA *)PactNew(palo->psw, palo, &g_vtactla);
        palo->pactla = pactla;
        InsertAloAct(palo, pactla);
    }
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", RecacheAloActList__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", InsertAloAct__FP3ALOP3ACT);

INCLUDE_ASM("asm/nonmatchings/P2/alo", ResortAloActList__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PasegaFindAlo__FP3ALO3OID);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PsmaFindAlo__FP3ALO3OID);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PasegaFindAloNearest__FP3ALO);

void CreateAloActadj(ALO *palo, int nPriority, ACTADJ **ppactadj)
{
    if (palo)
    {
        ACTADJ *pactadj = (ACTADJ *)PactNew(palo->psw, palo, &g_vtactadj);
        pactadj->nPriority = nPriority;
        InsertAloAct(palo, pactadj);
        *ppactadj = pactadj;
    }
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", FIsAloStatic__FP3ALO);

void ResolveAlo(ALO *palo)
{
    if (palo->paloRoot)
    {
        palo->paloRoot->cframeStatic = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionSpring__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionSpringDetail__FP3ALOP3CLQ);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionDamping__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionDampingDetail__FP3ALOP3CLQ);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationSpring__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationSpringDetail__FP3ALOP3CLQ);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationDamping__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationDampingDetail__FP3ALOP3CLQ);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionSmooth__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionSmoothMaxAccel__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPositionSmoothDetail__FP3ALOP4SMPA);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationSmooth__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationSmoothMaxAccel__FP3ALOf);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationSmoothDetail__FP3ALOP4SMPA);

void SetAloDefaultAckPos(ALO *palo, ACK ack)
{
    STRUCT_OFFSET(palo, 0x2c9, char) = ack;
}

void SetAloDefaultAckRot(ALO *palo, ACK ack)
{
    STRUCT_OFFSET(palo, 0x2ca, char) = ack;
}

void SetAloRestorePosition(ALO *palo, int fRestore) 
{ 
    SetAloRestorePositionAck(palo, (ACK)(fRestore ? 1 : -1));
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a3c8);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a3e8);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a418);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRestorePositionAck__FP3ALO3ACK);

void SetAloRestoreRotation(ALO *palo, int fRestore)
{
    SetAloRestoreRotationAck(palo, fRestore ? ACK_Spring : ACK_Nil);
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRestoreRotationAck__FP3ALO3ACK);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a4e8);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloLookAt__FP3ALO3ACK);

void SetAloLookAtIgnore(ALO *palo, float sIgnore)
{
    EnsureAloActla(palo);
    palo->pactla->sIgnore = sIgnore;
}

void GetAloLookAtIgnore(ALO *palo, float *psIgnore)
{
    *psIgnore = palo->pactla ? STRUCT_OFFSET(palo->pactla, 0x40, float) : 0.0f;
}

void SetAloLookAtPanFunction(ALO *palo, CLQ *pclq)
{
    EnsureAloActla(palo);
    STRUCT_OFFSET(&palo->pactla->clqPanToPan, 0, qword) = STRUCT_OFFSET(pclq, 0, qword);
}

void GetAloLookAtPanFunction(ALO *palo, CLQ *pclq)
{
    void *temp = STRUCT_OFFSET(palo, 0x200, void *);

    if (temp)
    {
        temp = &STRUCT_OFFSET(temp, 0x50, CLQ);
    }
    else
    {
        temp = &g_clqZero;
    }

    *(qword *)pclq = *(qword *)temp;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloLookAtPanLimits__FP3ALOP2LM);

void GetAloLookAtPanLimits(ALO *palo, LM *plm)
{
    *plm = (palo->pactla != 0) ? palo->pactla->lmPan : g_lmZeroOne;
}

void SetAloLookAtTiltFunction(ALO *palo, CLQ *pclq)
{
    EnsureAloActla(palo);
    STRUCT_OFFSET(&palo->pactla->clqTiltToTilt, 0, qword) = STRUCT_OFFSET(pclq, 0, qword);
}

void GetAloLookAtTiltFunction(ALO *palo, CLQ *pclq)
{
    CLQ *pclqSrc = (palo->pactla != 0) ? &palo->pactla->clqTiltToTilt : &g_clqZero;
    STRUCT_OFFSET(pclq, 0, qword) = STRUCT_OFFSET(pclqSrc, 0, qword);
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloLookAtTiltLimits__FP3ALOP2LM);

void GetAloLookAtTiltLimits(ALO *palo, LM *plm)
{
    *plm = (palo->pactla != 0) ? palo->pactla->lmTilt : g_lmZeroOne;
}

void SetAloLookAtEnabledPriority(ALO *palo, int nPriority)
{
    EnsureAloActla(palo);
    STRUCT_OFFSET(palo->pactla, 0x44, int) = nPriority; // palo->pactla->nPriorityEnabled
}

void GetAloLookAtEnabledPriority(ALO *palo, int *pnPriority)
{
    // palo->pactla->nPriorityEnabled
    *pnPriority = palo->pactla ? STRUCT_OFFSET(palo->pactla, 0x44, int) : 0;
}

void SetAloLookAtDisabledPriority(ALO *palo, int nPriority)
{
    EnsureAloActla(palo);
    STRUCT_OFFSET(palo->pactla, 0x48, int) = nPriority; // palo->pactla->nPriorityDisabled
}

void GetAloLookAtDisabledPriority(ALO *palo, int *pnPriority)
{
    // palo->pactla->nPriorityDisabled
    *pnPriority = palo->pactla ? STRUCT_OFFSET(palo->pactla, 0x48, int) : 0;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a810);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a848);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a860);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a888);

void FUN_0012a8b8(ALO *palo)
{
    STRUCT_OFFSET(palo->pactla, 0x4c, int) = 0; // palo->pactla->fPaused
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012a8c8);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRotationMatchesVelocity__FP3ALOff3ACK);

INCLUDE_ASM("asm/nonmatchings/P2/alo", PtargetEnsureAlo__FP3ALO);

void SetAloTargetAttacks(ALO *palo, int grftak)
{
    TARGET *ptarget = PtargetEnsureAlo(palo);
    if (grftak != -1)
    {
        ptarget->grftak = grftak;
    }
}

void SetAloTargetRadius(ALO *palo, float sRadiusTarget)
{
    TARGET *ptarget = PtargetEnsureAlo(palo);
    STRUCT_OFFSET(ptarget, 0x8c, float) = sRadiusTarget; // ptarget->sRadiusTarget
}

void SetAloTargetHitTest(ALO *palo, int fHitTest)
{
    TARGET *ptarget = PtargetEnsureAlo(palo);
    STRUCT_OFFSET(ptarget, 0x90, int) = fHitTest; // ptarget->fHitTest
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloScrollingMasterSpeeds__FP3ALOff);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloEyesClosed__FP3ALOf);

void EnsureAloSfx(ALO *palo)
{
    if (!palo->psfx)
    {
        NewSfx(&palo->psfx);
    }
}

void SetAloSfxid(ALO *palo, SFXID sfxid)
{
    EnsureAloSfx(palo);
    palo->psfx->sfxid = sfxid;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloSfxidSpl__FP3ALO5SFXID);

void GetAloSfxid(ALO *palo, SFXID *psfxid)
{
    *psfxid = palo->psfx ? palo->psfx->sfxid : SFXID_Nil;
}

void SetAloSStart(ALO *palo, float sStart)
{
    EnsureAloSfx(palo);
    palo->psfx->sStart = sStart;
}

void GetAloSStart(ALO *palo, float *psStart)
{
    *psStart = palo->psfx ? palo->psfx->sStart : 3000.0f;
}

void SetAloSFull(ALO *palo, float sFull)
{
    EnsureAloSfx(palo);
    palo->psfx->sFull = sFull;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloSndRepeat__FP3ALOP2LM);

void GetAloSFull(ALO *palo, float *psFull)
{
    *psFull = palo->psfx ? palo->psfx->sFull : 300.0f;
}

void SetAloUVolume(ALO *palo, float uVol)
{
    EnsureAloSfx(palo);
    palo->psfx->uVol = uVol;
}

void SetAloUDoppler(ALO *palo, float uDoppler)
{
    EnsureAloSfx(palo);
    palo->psfx->uDoppler = uDoppler;
}

void GetAloUDoppler(ALO *palo, float *puDoppler)
{
    *puDoppler = palo->psfx ? palo->psfx->uDoppler : 0.0f;
}

void SetAloUVolumeSpl(ALO *palo, float uVol)
{
    if (palo->psfx && palo->psfx->pamb)
    {
        SetPambVol(palo->psfx->pamb, uVol);
    }
}

void GetAloUVolume(ALO *palo, float *puVol)
{
    *puVol = palo->psfx ? palo->psfx->uVol : 1.0f;
}

void SetAloUPitch(ALO *palo, float uPitch)
{
    EnsureAloSfx(palo);
    palo->psfx->uPitch = uPitch;
}

void SetAloUPitchSpl(ALO *palo, float uPitch)
{
    if (palo->psfx && palo->psfx->pamb)
    {
        SetPambFrq(palo->psfx->pamb, uPitch);
    }
}

void GetAloUPitch(ALO *palo, float *puPitch)
{
    *puPitch = palo->psfx ? palo->psfx->uPitch : 0.0f;
}

void GetAloSndRepeat(ALO *palo, LM *plmRepeat)
{
    if (palo->psfx != 0)
    {
        *plmRepeat = palo->psfx->lmRepeat;
        return;
    }
    plmRepeat->gMin = -1.0f;
    plmRepeat->gMax = -1.0f;
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", StartAloSound__FP3ALO5SFXIDfffP2LM);

void StopAloSound(ALO *palo)
{
    if (palo->psfx)
    {
        StopSound(palo->psfx->pamb, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", EnsureAloThrob__FP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloThrobKind__FP3ALO6THROBK);

void GetAloThrobKind(ALO *palo, THROBK *pthrobk)
{
    *pthrobk = palo->pthrob ? palo->pthrob->throbk : THROBK_Nil;
}

void SetAloThrobInColor(ALO *palo, VECTOR *phsvInColor)
{
    EnsureAloThrob(palo);
    STRUCT_OFFSET(&palo->pthrob->vecHsvIn, 0, qword) = STRUCT_OFFSET(phsvInColor, 0, qword);
}

void GetAloThrobInColor(ALO *palo, VECTOR *phsvInColor)
{
    VECTOR *pvecSrc = (palo->pthrob != 0) ? &palo->pthrob->vecHsvIn : &D_00248D30;
    STRUCT_OFFSET(phsvInColor, 0, qword) = STRUCT_OFFSET(pvecSrc, 0, qword);
}

void SetAloThrobOutColor(ALO *palo, VECTOR *phsvOutColor)
{
    EnsureAloThrob(palo);
    STRUCT_OFFSET(&palo->pthrob->vecHsvOut, 0, qword) = STRUCT_OFFSET(phsvOutColor, 0, qword);
}

void GetAloThrobOutColor(ALO *palo, VECTOR *phsvOutColor)
{
    VECTOR *pvecSrc = (palo->pthrob != 0) ? &palo->pthrob->vecHsvOut : &D_00248D30;
    STRUCT_OFFSET(phsvOutColor, 0, qword) = STRUCT_OFFSET(pvecSrc, 0, qword);
}

void SetAloThrobDtInOut(ALO *palo, float dtInOut)
{
    EnsureAloThrob(palo);
    palo->pthrob->dtInOut = dtInOut;
}

void GetAloThrobDtInOut(ALO *palo, float *pdtInOut)
{
    *pdtInOut = palo->pthrob ? palo->pthrob->dtInOut : 0.0f;
}

void SetAloInteractCane(ALO *palo, GRFIC grfic) 
{
    STRUCT_OFFSET(palo, 0x2B2, uchar) = grfic;
    STRUCT_OFFSET(palo, 0x2B1, uchar) = grfic;
    STRUCT_OFFSET(palo, 0x2B0, uchar) = grfic;
}

void GetAloInteractCane(ALO *palo, GRFIC *pgrfic)
{
    *pgrfic = STRUCT_OFFSET(palo, 0x2B0, uchar);
}

void SetAloInteractCaneSweep(ALO *palo, GRFIC grfic)
{
    STRUCT_OFFSET(palo, 0x2b0, char) = grfic;
}

void GetAloInteractCaneSweep(ALO *palo, GRFIC *pgrfic)
{
    *pgrfic = STRUCT_OFFSET(palo, 0x2B0, uchar);
}

void SetAloInteractCaneRush(ALO *palo, GRFIC grfic)
{
    STRUCT_OFFSET(palo, 0x2b1, char) = grfic;
}

void GetAloInteractCaneRush(ALO *palo, GRFIC *pgrfic)
{
    *pgrfic = STRUCT_OFFSET(palo, 0x2B1, uchar);
}

void SetAloInteractCaneSmash(ALO *palo, GRFIC grfic)
{
    STRUCT_OFFSET(palo, 0x2b2, char) = grfic;
}

void GetAloInteractCaneSmash(ALO *palo, GRFIC *pgrfic)
{
    *pgrfic = STRUCT_OFFSET(palo, 0x2B2, uchar);
}

void SetAloInteractBomb(ALO *palo, GRFIC grfic)
{
    STRUCT_OFFSET(palo, 0x2B3, uchar) = grfic;
}

void GetAloInteractBomb(ALO *palo, GRFIC *pgrfic)
{
    *pgrfic = STRUCT_OFFSET(palo, 0x2B3, uchar);
}

void SetAloInteractShock(ALO *palo, GRFIC grfic)
{
    STRUCT_OFFSET(palo, 0x2b4, char) = grfic;
}

void GetAloInteractShock(ALO *palo, GRFIC *pgrfic)
{
    *pgrfic = STRUCT_OFFSET(palo, 0x2B4, uchar);
}

int FAbsorbAloWkr(ALO *palo, WKR *pwkr)
{
    return (pwkr->grfic != 0);
}

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloPoseCombo__FP3ALO3OID);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloForceCameraFade__FP3ALOi);

INCLUDE_ASM("asm/nonmatchings/P2/alo", SetAloRealClock__FP3ALOi);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012b550);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012b590);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012b5b8);

JUNK_ADDIU(10);
JUNK_WORD(0x7c450000);
JUNK_WORD(0x48220800);

INCLUDE_ASM("asm/nonmatchings/P2/alo", FUN_0012b6b8);

INCLUDE_ASM("asm/nonmatchings/P2/alo", anticrack_itm_firewall);
