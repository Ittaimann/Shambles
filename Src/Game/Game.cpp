#include <BAL2D.h>
#include <Game.h>
#include <SDL.h>
#include <Window.h>
namespace SHAM
{
Game::Game() {}
Game::~Game()
{
	delete m_window;
	delete m_renderer;
}
bool Game::initialize(const uint32 i_width, const uint32 i_height)
{
	SDL_Init(SDL_INIT_VIDEO);
	m_window = new BAL::Window();

	m_window->initialize(i_width, i_height);

	m_renderer = new BAL::BAL2D();
	m_renderer->initialize(m_window);
	// TODO: fix this return
	return true;
}
bool Game::beginGame() { return false; }
bool Game::endGame() { return false; }
} // namespace SHAM
