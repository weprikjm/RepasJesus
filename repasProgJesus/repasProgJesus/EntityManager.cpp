#include "EntityManager.h"
#include <Math.h>
#define MAX 9999
#define NULL 0

Entity* EntityManager::GetEnemy()
{
	float d;
	int life;
	float factor;
	float fact_min;
	int index;

	for (int i = 0; i < num_enemies; i++)
	{
		if (!Enemies[i].stunned)
		{
			d = Distance(&Enemies[i], &Player);
			life = abs(Player.hp - Enemies[i].hp);

			if (life == 0)
			{
				factor = MAX;
			}
			else
			{
				factor = d / life;
			
			}
			if (factor<fact_min)
			{
				fact_min = factor;
				index = j;
			}

			


		}
	
	}

	if (fact_min == MAX)
	{
	
		return NULL;
	}
	else
	{ 
	
		return &Enemies[index];
	
	}




}

bool EntityManager::Surrender() 
{
	int count = 0;

	for (int i = 0; i < num_enemies; i++)
	{
		if (!Enemies[i].stunned)
		{
		
			count += Enemies[i].hp;

		}

	}

	return (count >= Player.hp * 10);


}