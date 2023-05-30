#pragma once
class Game
{
	void InitializeRooms();
	void WelcomePlayer();
	void GivePlayerOptions() const;
	void GetPlayerInputs(std::stringstream& playerInput)const;

public:
	Game();
	~Game();

	void RunGame();
};

