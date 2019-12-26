#include "Planets.h"
#include <iostream>
#include <algorithm>
#include <vector>

bool planet_sort_by_density(Planets first, Planets second) {
    return first.density > second.density;
}

int main() {
    Earth earth;
    Mars mars;
    Venus venus;

    earth.set_mass(5.24*pow(10,24));
    earth.set_radius(64*pow(10,5));
    earth.set_distance_to_sun(150*pow(10,9));

    mars.set_mass(6.39*pow(10,23));
    mars.set_radius(33*pow(10,5));
    mars.set_distance_to_sun(2.3*pow(10,11));

    venus.set_mass(4.87*pow(10,24));
    venus.set_radius(60*pow(10,5));
    venus.set_distance_to_sun(107*pow(10,9));

    earth.name ="Earth";
    mars.name = "Mars";
    venus.name = "Venus";

    earth.info();
    mars.info();
    venus.info();

    std::vector<Planets> planets = {earth, mars, venus};
    std::sort (planets.begin(), planets.end(), planet_sort_by_density);

    std::cout << "Planets sorted by density: ";
    for (auto i = planets.begin(); i != planets.end(); i++) {
        std::cout << (*i).name << ' ';
    }

    return 0;
}

