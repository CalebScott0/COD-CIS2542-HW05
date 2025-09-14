#include "GameData.h"

GameData::GameData()
    : countShines(0),
      countBlueCoins(0)
{
    // Empty.
}

int GameData::GetBlueCoins() const
{
    return countBlueCoins;
}

int GameData::GetShines() const
{
    return countShines;
}

void GameData::AddBlueCoins(int blueCoins)
{
    if(blueCoins > 0)
    {
        countBlueCoins += blueCoins;
    }
}

void GameData::AddShines(int shines)
{
    if(shines > 0)
    {
        countShines += shines;
    }
}

void GameData::ConvertBlueCoinsToShines() 
{
    if(countBlueCoins >= 10)
    {
        countShines += (countBlueCoins / 10);
        countBlueCoins %= 10;
    }
}

bool GameData::CanMarioGoToCoronaMountain() const
{
    return (countShines >= 50);
}
