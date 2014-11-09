#include "CharacterCreator.h"
#include "GameManager.h"

USING_NS_CC;

CharacterCreator::CharacterCreator()
{
    
}

CharacterCreator::~CharacterCreator()
{
    
}

void CharacterCreator::init(CharacterScale scale = ALL)
{
    this->scale = scale;
}

Sprite* CharacterCreator::create(const std::string &filename)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
    Point position = Point(origin.x + visibleSize.width / 2,
                           origin.y + visibleSize.height * 5 / 10);
    
    return create(filename, position);
}

Sprite* CharacterCreator::create(const std::string &filename, Point position)
{
    Sprite* character = Sprite::createWithSpriteFrameName(filename);
    character->setPosition(position);
    float scale = character->getScale() * this->scale / 100;
    character->setScale(scale, scale);
    
    return character;
}
