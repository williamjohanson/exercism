#include "allergies.h"

bool is_allergic_to(allergen_t allergen, int allergen_score) {
    return ((allergen_score >> allergen) & 1); 
}

allergen_list_t get_allergens(int allergen_score) {
    allergen_list_t allergen_list = {
        .count = 0,
        .allergens = {0},
    };

    for (int i = 0; i < ALLERGEN_COUNT; i++) {
        if (is_allergic_to(i, allergen_score)) {
            allergen_list.count++;
            allergen_list.allergens[i] = true;
        }
    }

    return allergen_list;
}