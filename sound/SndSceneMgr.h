#pragma once

#include <basis/seadTypes.h>

class SndSceneMgr
{
public:
    enum EffectType
    {
                            // NSMBW    | NSMBU         | NSMBU (Translated)
        cEffect_Soto = 0,   // SOTO     | �O             | Outside
        cEffect_Chika,      // CHIKA    | �n��            | Underground
        cEffect_Chika_S,    // CHIKA_S  | ���n��           | Underground Small
        cEffect_Water,      // WATER    | ����            | Underwater
        cEffect_Boss,       // BOSS     | �{�X����          | Boss Room
        cEffect_Toride,     // TORIDE   | ��             | Fortress / Tower
        cEffect_Shiro,      // SHIRO    | ��             | Castle
        cEffect_Obake,      // OBAKE    | ���������~         | Ghost House
        cEffect_Dokan,      // DOKAN    | �G��            | Painting
        cEffect_Gake,       // GAKE     | �R             | Cliff / Mountain
        cEffect_House,      // HOUSE    | ������           | Small Room
        cEffect_Chika_Sa,   // CHIKA_SA | �����n��          | Desert Underground (Sa = Sabaku)
        cEffect_Boss_Jr,    // BOSS_JR  | Jr.��          | Jr. Battle
        cEffect_Kurayami,   // KURAYAMI | �ÈŒn��          | Darkness Underground
        cEffect_Chika_Ka,   // CHIKA_KA | �ΎR����          | Lava Underground (Ka = Kazan)
        cEffect_Default     // DEFAULT  | �f�t�H���g�i�R�[�X�ȊO�j  | Default (non-course)
    };
};
