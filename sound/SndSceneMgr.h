#pragma once

#include <heap/seadDisposer.h>

class SndSceneMgr
{
public:
    enum EffectType
    {
                            // NSMBW    | NSMBU (Translated)                    | NSMBU (Original)
        cEffect_Soto = 0,   // SOTO     | Outside                               | �O
        cEffect_Chika,      // CHIKA    | Underground                           | �n��
        cEffect_Chika_S,    // CHIKA_S  | Small Underground                     | ���n��           | (S = Small)
        cEffect_Water,      // WATER    | Underwater                            | ����
        cEffect_Boss,       // BOSS     | Boss Room                             | �{�X����
        cEffect_Toride,     // TORIDE   | Fortress / Tower                      | ��
        cEffect_Shiro,      // SHIRO    | Castle                                | ��
        cEffect_Obake,      // OBAKE    | Haunted House / Ghost House           | ���������~
        cEffect_Dokan,      // DOKAN    | Painting                              | �G��
        cEffect_Gake,       // GAKE     | Cliff / Mountain                      | �R
        cEffect_House,      // HOUSE    | Small Room                            | ������
        cEffect_Chika_Sa,   // CHIKA_SA | Desert Underground                    | �����n��          | (Sa = Sabaku)
        cEffect_Boss_Jr,    // BOSS_JR  | Jr. Battle                            | Jr.��
        cEffect_Kurayami,   // KURAYAMI | Darkness Underground                  | �ÈŒn��
        cEffect_Chika_Ka,   // CHIKA_KA | Volcano Interior / Lava Underground   | �ΎR����          | (Ka = Kazan)
        cEffect_Default     // DEFAULT  | Default (non-course)                  | �f�t�H���g�i�R�[�X�ȊO�j
    };

    enum BossClearType
    {
        cBossClear_Toride = 0,      // STRM_BGM_TORIDEBOSS_CREAR
        cBossClear_Shiro,           // STRM_BGM_SHIRO_BOSS_CLEAR
        cBossClear_Hikousen,        // STRM_BGM_HIKOUSENBOSS_CREAR
        cBossClear_LastBoss,        // STRM_BGM_LAST_BOSS_CLEAR
        cBossClear_LastBoss2,       // STRM_BGM_LAST_BOSS2_CLEAR
        cBossClear_LastBoss_Harp,   // STRM_BGM_LAST_BOSS_HARP
        cBossClear_LastBoss2_Harp,  // STRM_BGM_LAST_BOSS2_HARP
        cBossClear_Num
    };
    static_assert(cBossClear_Num == 7);

public:
    SndSceneMgr();

    void enterHBM();
    void exitHBM();

    void exit();

    void startBossClearFanfare(BossClearType type);

    SEAD_SINGLETON_DISPOSER(SndSceneMgr)
};
