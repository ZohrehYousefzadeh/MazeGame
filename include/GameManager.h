#include "InputManager.h"
#include "TableManager.h"

namespace Maze
{
	class Game
	{
		private:
			Input im_;
			Design d_;
			void update_table(int start); //Update Table with the Start-Place
			void find_way(); //Find the way
		public:
			void run(); //Start Game
	};
}
