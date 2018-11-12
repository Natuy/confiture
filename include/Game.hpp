#ifndef CFT_GAME_H
#define CFT_GAME_H

#include <SFML/Graphics.hpp>

namespace cft
{

  class Game
  {
  public:
    virtual int Run();
    virtual int LoadContent();
    virtual int UnloadContent();

  protected:


  private:

  };
}

#endif
