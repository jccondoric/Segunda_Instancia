#pragma once
#include "Scene.h"
#include<SDL.h>
#include<vector>


enum class MenuItemK
{
    None,
    ConfiguratinoWASD_space,
    ConfigurationTFGH_b,
    ConfigurationIJKL_m,
    Last
};

class ConfigurationKeysScene : public Scene
{
public:
    /**
        * @brief Construct a new Scene
        *
        * @param game
        */
    ConfigurationKeysScene(GameManager* game);
    /**
        * @brief Called when scene was activated
        *
        */
    virtual void onEnter() override;
    /**
        * @brief Called when scene was deactivated
        *
        */
    virtual void onExit() override;
    /**
        * @brief Trigger on SDL2 event if scene is active
        *
        * @param event - SDL2 event
        */
    virtual void onEvent(const SDL_Event& event) override;

private:
    /**
        * @brief called when menu item was selected
        *
        */
    void onMenuItemSelect();
    /**
        * @brief called when menu item was pressed
        *
        */
    void onMenuItemPress();

    //std::shared_ptr<Text> startText = nullptr;      // menu start
    //Text* startText = nullptr; Es lo mismo que la linea anterior

    //std::shared_ptr<Text> startText = nullptr;      // menu start 
    //std::shared_ptr<Text> creditsText = nullptr;      // menu credits clasic
    //std::shared_ptr<Text> exitText = nullptr;       // menu exit
    //std::shared_ptr<Music> menuMusic = nullptr;     // menu music
    MenuItemK currentSelectedMenu = MenuItemK::ConfiguratinoWASD_space; // current selected menu

    // const colors for menu selection
    const SDL_Color colorStandard = { 255, 255, 255, 255 };
    const SDL_Color colorPressed = { 224, 30, 55, 255 };

};

