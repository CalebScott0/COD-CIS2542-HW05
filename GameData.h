#ifndef GAME_H
#define GAME_H

class GameData
{
public:
    GameData();

    int GetBlueCoins() const;
    int GetShines() const;

    void AddBlueCoins(int blueCoins);
    void AddShines(int shines);

    bool CanMarioGoToCoronaMountain() const;
    void ConvertBlueCoinsToShines();

private:
    int countShines;
    int countBlueCoins;
};

#endif
