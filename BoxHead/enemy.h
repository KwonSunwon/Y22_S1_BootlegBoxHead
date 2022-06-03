#include "stdafx.h"
#include "object.h"

class Enemy : public Object
{
private:
public:
	Enemy(int _health, int _attack, int _speed, POINT firstLocation) : Object(_health, _attack, _speed, firstLocation) {}

    void Move_left();
    void Move_right();
    void Move_up();
    void Move_down();
};