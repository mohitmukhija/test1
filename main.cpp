// test.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class except {
	int x;
public:
	void print() {
		cout << "Got exception" << endl;
	}
};
class mohit {
	int i;
public:
	mohit(int x) :i(x) {}
	mohit() {
		i = 0;
	}
	int get() { return i; }
	virtual int disp() {
		cout << "base class" << endl;
		//throw except();
		return 0;
	}
	bool operator<(mohit& x) {
		return i < x.get();
	}
	friend ostream& operator<<(ostream &s, mohit x) {
		s << x.i;
		return s;
	}
};

class mukhija :public mohit {
	int j;
public:
	mukhija(int x):mohit(x){}
	int disp() {
		cout << "child class" << endl;
		return 0;
	}
};

int main()
{
	//Algorithm class sort
	string s("let's begin to sort string");
	sort(begin(s), end(s));
	cout << s << endl;
	mohit m1(3);
	mohit m2(2);
	mohit m3(1);
	vector<mohit> v = { 15,12,20 };
	v.push_back(m1); v.push_back(m2); v.push_back(m3);
	v.emplace(begin(v), 6);
	sort(begin(v), end(v));
	for (auto x : v) { cout << x.get() << endl; }



	//Algorithm class find
	/*
	string s = "Hello Mohit Mukhija, let's begin c++ learning.";
	const char countchar = 'm';
	cout << "M's in string are " << count(begin(s), end(s), 'm') << endl;
	cout << "M's in string are " << count_if(begin(s), end(s), [&](char t) {return (t == tolower(countchar) || t == toupper(countchar)); }) << endl;
	cout << "M's all of in string " << all_of(begin(s), end(s), [&](char t) {return (t == tolower(countchar) || t == toupper(countchar)); }) << endl;
	cout << "M's any of in string " << any_of(begin(s), end(s), [&](char t) {return (t == tolower(countchar) || t == toupper(countchar)); }) << endl;
	cout << "M's none of in string " << none_of(begin(s), end(s), [&](char t) {return (t == tolower(countchar) || t == toupper(countchar)); }) << endl;

	const char findchar = 'e';
	auto x = find(begin(s), end(s), findchar);
	x = find(++x, end(s), findchar);
	x = find_if_not(begin(s), end(s), [&](char l) { return l != findchar; });
	string firstof = "in";
	x = find_first_of(begin(s), end(s), begin(firstof), end(firstof));
	x = search(begin(s), end(s), begin(firstof), end(firstof));
	x = find_end(begin(s), end(s), begin(firstof), end(firstof));
	cout << "found e at " <<  *++x << endl;

	//shared pointers and weak pointers
	/*auto sp = make_shared<mohit>(20);
	auto wp = weak_ptr<mohit>{ sp };
	wp = sp;
	cout << wp.expired() << endl;
	cout << wp.use_count() << endl;
	auto sp1 = sp;
	cout << wp.use_count() << endl;
	auto sp2 = wp.lock();
	cout << wp.use_count() << endl;
	sp.get()->disp();
	cout << wp.use_count() << endl;
	sp.swap(sp2);
	cout << wp.use_count() << endl;
	sp.reset();
	cout << wp.use_count() << endl;
	auto wp1 = weak_ptr<mohit>(sp1);
	cout << wp.use_count() << endl;
	//Excetions
	/*try {
		mohit m1(5);
		//m1.disp();
		vector<int> x;
		x[0] = 5;
		cout << x[1];
	}
	catch (exception &x) {
		cout << x.what();
	}
	/*catch (except &x) {
	x.print();
	}*/
	/*map<int, mohit> maps;
	maps[0] = mohit(5);
	maps[2] = mohit(7);
	pair<int, mohit> p = { 1,mohit(6) };
	maps.insert(p);
	maps.emplace(pair<int, mohit>(8, mohit(8)));
	cout << "find 2 ->" << maps.find(2)->second << endl;
	cout << "find 1 ->" << find(maps.begin(), maps.end(), 1)->second << endl;
	for (auto a : maps) {
		cout << "first" << a.first ;
		cout << "   second" << a.second << endl;
	}


	/*vector<int> x;
	cout << "isempty " << x.empty() << endl;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	x.push_back(4);
	for (auto i = x.begin(); i != x.end(); i++)
		cout << *i << "\n";
	cout << "size " << x.size() << endl;
	cout << "isempty " << x.empty() << endl;
	x.emplace(x.begin(), 0);

	for (auto i = x.rbegin();i!=x.rend();i++)
		cout << *i << "\n";

	/*mohit *p = new mohit(10);
	mukhija *pq = new mukhija(10);
	pq = static_cast<mukhija*>(p);
	pq->disp();
	auto m1 = make_shared<mohit>(20);
	m1->disp();
	string s1{ "this is " };
	string s2{ "test file" };
	cin >> s2;
	cout << s1 + s2 << endl;
	map<int, int> mohit{ {2,3},{3,4} };
	for (auto x : mohit) {
		cout << "first is" << x.first << endl;
		cout << "Second is" << x.second << endl;
	}
	cout << "Hello Mohit Mukhija." << endl;*/
	getchar();
    return 0;
}
