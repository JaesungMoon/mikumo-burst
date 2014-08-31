#include "SelectSceneLoader.h"
#include "CharacterCreator.h"

Scene* SelectSceneLoader::createScene()
{
    cocosbuilder::NodeLoaderLibrary* nodeLoaderLibrary = cocosbuilder::NodeLoaderLibrary::newDefaultNodeLoaderLibrary();
    nodeLoaderLibrary->registerNodeLoader("SelectScene", SelectSceneLoader::loader());
    
    cocosbuilder::CCBReader* ccbReader = new cocosbuilder::CCBReader(nodeLoaderLibrary);
    Node* node = ccbReader->readNodeGraphFromFile("SelectScene.ccbi");
    
    Scene* pScene = Scene::create();
    if (node != NULL)
    {
        pScene->addChild(node);

        // キャラ
        CharacterCreator* creator = new CharacterCreator();
        Sprite* character = creator->create("character/f333.png", CharacterScale::HARF);
        pScene->addChild(character, 0);
    }
    ccbReader->release();
    
    return pScene;
}
