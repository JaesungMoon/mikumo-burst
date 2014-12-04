#ifndef __GAME_MANAGER__
#define __GAME_MANAGER__

#include "cocos2d.h"

enum ScreenMode {
    ScreenModeSd,
    ScreenModeHd,
};

enum CharaSelect {
    CharaSelectConoha = 0,
    CharaSelectAnzu = 1,
};

enum BattleMode {
    BattleModeNormal,
    BattleModeBoss,
};

class GameManager
{
private:
    GameManager();
    static GameManager* instance;
    
public:
    static GameManager* getInstance();
    
    void initialize();
    
    ScreenMode screenMode;
    bool isScreenModeSd();
    bool isScreenModeHd();

    CharaSelect charaSelect;
    bool isCharaSelectConoha();
    bool isCharaSelectAnzu();
    
    BattleMode battleMode;
    bool isBattleModeNormal();
    bool isBattleModeBoss();
    
    int getRank();
    
    int battleDamagePoint;
    int burstCount;

};

#endif /* defined(__GAME_MANAGER__) */
