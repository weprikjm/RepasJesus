#include "Entity.h"

class EntityManager {
public:

	float Distance(Entity *u1, Entity *u2);
	Entity* GetEnemy();
	bool Surrender();
		
private:

	Entity Player, *Enemies;
	int num_enemies;
};