#pragma once

#include <basis/seadTypes.h>

class SndSceneMgr
{
public:
    enum EffectType
    {
                            // NSMBW    | NSMBU (Translated)    | NSMBU (Original)
        cEffect_Soto = 0,   // SOTO     | Outside               | �O
        cEffect_Chika,      // CHIKA    | Underground           | �n��
        cEffect_Chika_S,    // CHIKA_S  | Underground Small     | ���n��           | (S = Small)
        cEffect_Water,      // WATER    | Underwater            | ����
        cEffect_Boss,       // BOSS     | Boss Room             | �{�X����
        cEffect_Toride,     // TORIDE   | Fortress / Tower      | ��
        cEffect_Shiro,      // SHIRO    | Castle                | ��
        cEffect_Obake,      // OBAKE    | Ghost House           | ���������~
        cEffect_Dokan,      // DOKAN    | Painting              | �G��
        cEffect_Gake,       // GAKE     | Cliff / Mountain      | �R
        cEffect_House,      // HOUSE    | Small Room            | ������
        cEffect_Chika_Sa,   // CHIKA_SA | Desert Underground    | �����n��          | (Sa = Sabaku)
        cEffect_Boss_Jr,    // BOSS_JR  | Jr. Battle            | Jr.��
        cEffect_Kurayami,   // KURAYAMI | Darkness Underground  | �ÈŒn��
        cEffect_Chika_Ka,   // CHIKA_KA | Lava Underground      | �ΎR����          | (Ka = Kazan)
        cEffect_Default     // DEFAULT  | Default (non-course)  | �f�t�H���g�i�R�[�X�ȊO�j
    };
};
