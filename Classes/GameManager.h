#ifndef __GAME_MANAGER__
#define __GAME_MANAGER__

#include "cocos2d.h"

enum ScreenMode {
    ScreenModeSd ,
    ScreenModeHd ,
};

enum BattleMode {
    BattleModeNormal ,
    BattleModeBoss ,
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
    
    BattleMode battleMode;
    bool isBattleModeNormal();
    bool isBattleModeBoss();
    
    int getBattleRank();
    
    int battleDamagePoint;
    int burstCount;

};

#endif /* defined(__GAME_MANAGER__) */
