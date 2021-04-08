#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "restaurant.h"

using namespace std;

class TestPerson
{
public:
	TestPerson();
	TestPerson(string name);
	void addFood(Food newFood, double price);
	float getTotalCost();
	string getName();
	vector<Food> getOrder();

private:
	string personName;
	float totalPrice;
	vector<Food> order;
};

TestPerson::TestPerson()
{
	personName = "";
	totalPrice = 0;
}

TestPerson::TestPerson(string name)
{
	personName = name;
	totalPrice = 0;
}

string TestPerson::getName()
{
	return personName;
}

void TestPerson::addFood(Food newFood, double price)
{
	order.push_back(newFood);
	newFood.setPrice(price);
	totalPrice += newFood.getPrice();
}

float TestPerson::getTotalCost()
{
	return totalPrice;
}

vector<Food> TestPerson::getOrder()
{
	return order;
}
