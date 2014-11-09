#ifndef __Fragment_of_Eternity__Constant__
#define __Fragment_of_Eternity__Constant__

#define BM_FONT_SIZE(__SIZE , __BASE) (CC_CONTENT_SCALE_FACTOR() * ((float)__SIZE / (float)__BASE))
#define BM_FONT_SIZE64(__SIZE) (BM_FONT_SIZE(__SIZE , 64))

class Constant
{
public:
    static const int GAME_TIME = 10;
    static const int ETERNITY_BREAK_TIME = 3;
    static const int DEFAULT_ENEMY_HP = 1000000;
    static const int BASE_DAMAGE = 1000;
    static const int BASE_DAMAGE_BREAK = 4000;
    static const int DAMAGE_RANK_UP_INCREMENT = 1000;
    static const int HP_RANK_UP_INCREMENT = 100000;
    static const int LIMIT_RANK = 999;
    static const int LIMIT_DAMAGE = 999999;
    static const int MAX_PLAYER_EP = 100;
    static const int EP_INCREMENT = 1;

    static const std::vector<std::string> PERSONA_IMAGE_LIST(){
        return {
            "f072", "f264", "f287", "f299", "f313", "f317", "f349", "f353", "f368",
        };
    };

    static const std::vector<std::string> ENEMY_IMAGE_LIST(){
        return {
            "f183", "f186", "f189", "f195", "f201", "f207", "f271", "f274",
            "f277"
        };
    };
    static const std::vector<std::string> BG_IMAGE_LIST(){
        return {
            "000", "001", "002", "003", "004", "006", "007", "008", "010",
            "011", "012", "013"
        };
    };
    static const std::vector<std::string> BATTLE_EFFECT_IMAGE_LIST(){
        return {
            "battleEffect107a", "battleEffect107b", "battleEffect107c",
            "battleEffect107d", "battleEffect107e", "battleEffect107f",
            "battleEffect107g", "battleEffect107h", "battleEffect107i",
            "battleEffect107j"
        };
    };
    static const std::vector<std::string> EFFECT_LIST(){
        return {
            "se_battle_blow", "se_battle_gun",
            "se_battle_darkness", "se_battle_fire", "se_battle_water"
        };
    };
    static const std::vector<std::string> VOICE_LIST(){
        return {
            "i01", "i33", "i34", // 準備完了(0〜2)
            "i02", "i03", "i04","i05", // 通常攻撃(3〜6)
            "i06", "i14", "i27", "i30", // 限界突破(7〜10)
            "i10", "i11", "i12",  // バトル終了(11〜13)
            "i24", "i25",  // 敵撃破(14〜15)
        };
    };

    static const char* NORMAL_FONT(){return "normal.fnt";}
    static const char* LARGE_FONT(){return "large.fnt";}

    /**
     *  UserDefaultのキー
     */
    class UserDefaultKey
    {
    public:
        static const char* DATA_STORED(){return "data_stored";}
        static const char* BATTLE_COUNT(){return "battle_count";}
        static const char* RANK(){return "rank";}
        static const char* HIGH_RANK(){return "high_rank";}
        static const char* TOTAL_SCORE(){return "total_score";}
        static const char* TOTAL_BREAK(){return "total_break";}
        static const char* SCORE_TABLE(){return "score_table";}
        static const char* SCORE_TABLE_RANK(){return "score_table_rank";}
        static const char* SCORE_TABLE_SCORE(){return "score_table_score";}
        static const char* SCORE_TABLE_BREAK(){return "score_table_break";}
    };
};

#endif /* defined(__Fragment_of_Eternity__Constant__) */
