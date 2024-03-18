#include <CoreDefs.h>
namespace BAL
{
class Window;
class BAL2D;
} // namespace BAL
namespace SHAM
{
class Game
{
public:
	Game();
	~Game();
	bool initialize(uint32 i_width, uint32 i_height);
	bool beginGame();
	bool endGame();

private:
	BAL::Window* m_window;
	BAL::BAL2D* m_renderer;
};
} // namespace SHAM
