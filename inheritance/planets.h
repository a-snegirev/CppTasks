#pragma once
# include <cmath>
#include <iostream>
#include <string>

class Planets {
public:
	double radius;
	double mass;
	double distance;
	double density;
	double orbital_speed;
	std::string name;

	void set_radius(double r) {
		radius = r;
	}

	void set_mass(double m) {
		mass = m;
	}

	void set_distance_to_sun(double d) {
		distance = d;
	}

	void set_name(std::string st){
		name = st;
	}


	double get_mass() {
		return mass;
	}

	double get_radius() {
		return radius;
	}

	double get_distance_to_sun() {
		return distance;
	}

	double get_density(){
		density = mass / (4.18 * radius * radius * radius);
		return density;
	}

	double get_orb_speed(){
		orbital_speed = pow(1.32 * pow(10, 20) / distance, 0.5);
		return orbital_speed;
	}

};

class Earth : public Planets {
public:
	void info(){
		std::cout <<  "Earth's density: = " << get_density()<<"\n" << "orbital speed = " << get_orb_speed()<<"\n";
	}
};

class Mars : public Planets {
public:
	void info(){
		std::cout <<  "Mars's density: = " << get_density()<<"\n" << "orbital speed = " << get_orb_speed()<<"\n";
	}

};

class Venus : public Planets {
public:
	void info(){
		std::cout <<  "Venus's density: = " << get_density()<<"\n" << "orbital speed = " << get_orb_speed()<<"\n";

	}
};
