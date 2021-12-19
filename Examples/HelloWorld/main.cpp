#define PROJECT_NAME "HelloWorld"
#include <Cacao>
#include "custom-layer.hpp"

class $redirect(MenuLayer) {
	bool init() {
        /*
          In cocos2d-x, init functions return a boolean, which is false if
          the initialization went wrong, so here we check for it. most of the time
          gd just crashes if an init function goes wrong so this is kinda useless,
          except for the part where we return true at the end
        */

		if (!$MenuLayer::init()) return false;


        /*
          Note that we're using the one without the -uhd and -hd suffix; which is
          because gd deals with selecting the right resolution texture for us.
          Note that this texture is also its own file in the gd Resources/ folder,
          meaning you access it via CCSprite::create
        */
        auto sprite = CCSprite::create("dialogIcon_017.png");

        /*
          Also note that this one is different, as the texture is contained within a
          spritesheet, so for that we use CCSprite::createWithSpriteFrameName
          For finding the name of a texture that is inside a spritesheet, you can either
          look at the .plist file directly, or use Absolute's texture splitter.
        */
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_stopEditorBtn_001.png");

        /*
          As with every CCNode, you can set it's position, scale, rotation, etc.
          cocos2d-x's position system is based off the bottom left corner of your screen,
          and the values aren't in pixels (sometimes they aren't even consistent), so
          positioning may require a lot of trial and error.
        */
        sprite->setPosition({100, 100});
        sprite->setScale(0.5f);
        // make sure to actually add it to the layer, otherwise nothing will show up
        addChild(sprite);


        /*
          Here we create a button using one of rob's classes, CCMenuItemSpriteExtra
          (despite the name it's not in cocos2d), and to do this we use gd.h, which
          contains a bunch of useful functions.
          CCMenuItemSpriteExtra is the button you can click on and it does a bounce animation
        */
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite, // the sprite the button will use
            nullptr,
            /*
              Here is the "target" for the callback function, most of the time it
              will be the current `this` (in our case self) and since callback
              functions have to be class methods, the target will be
              the `this` pointer in the method. It can be anything (except 0) but
              it's an useful way of using something in the callback.
            */
            this,
            /*
              Here is the callback that is called when you press the button. It's
              wrapped in a macro, which casts it to the correct type used by cocos.
              The callback is in CustomLayer because as previously mentioned, it has to
              be a class method, and we're not inside a class. I could just create a class
              specifically for this callback (say `Callback::switchToCustomLayer`), but i
              find that kinda messy and we can just use this class anyways.
            */
            menu_selector(CustomLayer::switchToCustomLayerButton)
        );

        // continue reading on `custom-layer.hpp`, where our CustomLayer is defined

        // All CCMenuItems need to be in a CCMenu to work,
        // otherwise you can't click on the button
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition({150, 100});

        addChild(menu);

        return true;
	} 
};
