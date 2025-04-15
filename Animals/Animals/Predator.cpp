#include "Predator.h"

void Predator::Eat() {

	for (int i = 0; i < P->count; i++) {
		if (P->Table[i]->type == 0 && P->Table[i]->foodSupplyPerMeal > 0 && pos != i) {

			if (P->Table[i]->Position.x > P->Table[i]->Position.x - P->Table[i]->foodArea && i < P->Table[i]->Position.x < P->Table[i]->Position.x + P->Table[i]->foodArea &&
				i < P->Table[i]->Position.y > Position.y - foodArea && i < P->Table[i]->Position.y < Position.y + foodArea) {

				for (int j = i; j < P->count - 1; j++) {
					P->Table[j] = P->Table[j + 1];
				}
				// ??????????????????????????????????????

				foodSupplyPerMeal--;
			}
		}

		if (foodSupplyPerMeal == 0) {
			hungry = 1;
		}


	}
}