#pragma once
#include "PlayerInput.hpp"
#include <SFML/Network.hpp>
#include <istream>
#include <memory>

class LocalOnlinePlayerInput : public PlayerInput {
private:
    std::istream& m_input_stream;
    std::shared_ptr<sf::TcpSocket> m_socket;

public:
    LocalOnlinePlayerInput(std::istream& input_stream, std::shared_ptr<sf::TcpSocket> socket);
    std::string getPrompt() override;
    std::optional<Move> inputMove() override;
};