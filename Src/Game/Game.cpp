#include <BAL2D.h>
#include <Game.h>
#include <GameState.h>
#include <SDL.h>
#include <Window.h>
namespace SHAM
{
Game::Game() {}
Game::~Game()
{
	delete m_window;
	delete m_renderer;
	delete m_gameState;

	SDL_Quit();
}
bool Game::initialize(const uint32 i_width, const uint32 i_height)
{
	SDL_Init(SDL_INIT_VIDEO);
	m_window = new BAL::Window();

	m_window->initialize(i_width, i_height);

	m_renderer = new BAL::BAL2D();
	m_renderer->initialize(m_window);
	// TODO: fix this return

	m_gameState = new GameState();

	return true;
}
bool Game::beginGame()
{
	GameLoop();
	return false;
}
bool Game::endGame() { return false; }

void Game::GameLoop()
{
	bool running = true;
	while (running)
	{
		m_gameState->update();
		m_renderer->renderFrame();

		SDL_Delay(3000);
		running = false;
	}
}
} // namespace SHAM
