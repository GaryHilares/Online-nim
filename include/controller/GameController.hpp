#pragma once
#include "../model/GameState.hpp"
#include "../view/GameView.hpp"
#include "InputScanner.hpp"
#include "MenuState.hpp"

class GameController : public MenuState {
private:
    GameState m_state;
    GameView m_view;
    InputScanner m_scanner;

public:
    GameController(std::istream& input_stream, std::ostream& output_stream);
    void run(MenuContext& menu_context) override;
};
