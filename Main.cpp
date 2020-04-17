#include "Lab_6.h"
#include <iostream>
#include <set>
#include <vector>
#include <array>

int main() {
	std::cout << "-------------Task 2--------------" << std::endl;
	std::set<int> mySet, mySet1;
	mySet.insert(8);
	mySet.insert(3);
	mySet.insert(-4);
	mySet.insert(9);
	mySet.insert(2);
	mySet1.insert(3);
	std::cout << "Is any of mySet even?: " << (any_of(mySet, IsEven()) ? "true" : "false") << "\n";
	std::cout << "Is any of mySet1 even?: " << (any_of(mySet1, IsEven()) ? "true" : "false") << "\n";

	std::vector<Point> s;
	s.push_back(Point(1, 0));
	s.push_back(Point(0, 1));
	s.push_back(Point(1, 1));
	std::cout << "Is any of s is Point(0;0)?: " << (any_of(s, Comparator()) ? "true" : "false") << "\n";
	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "-------------Task 6--------------" << std::endl;
	std::array<int, 7> a{ 1,2,4,3,5,6,7 };
	std::cout << "a:"; for (int& x : a) std::cout << ' ' << x;
	std::cout << "\n";
	std::cout << "a is partitioned?: " << (is_partitioneD(a.begin(), a.end(), IsOdd())? "true" : "false") << "\n";

	std::array<int, 7> b{ 1,7,3,5,4,6,2 };
	std::cout << "b:"; for (int& x : b) std::cout << ' ' << x;
	std::cout << "\n";
	std::cout << "b is partitioned?: " << (is_partitioneD(b.begin(), b.end(), IsOdd()) ? "true" : "false") << "\n";
	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "-------------Task 9--------------" << std::endl;
	std::vector<int> p, p1, p2;
	p.push_back(1);

	p1.push_back(1);
	p1.push_back(2);
	p1.push_back(1);

	p2.push_back(1);
	p2.push_back(2);
	p2.push_back(3);

	std::vector<Point> p3, p4;
	p3.push_back(Point(0, 0));
	p3.push_back(Point(0, 1));
	p3.push_back(Point(1, 1));
	p3.push_back(Point(0, 1));
	p3.push_back(Point(0, 0));

	p4.push_back(Point(0, 0));
	p4.push_back(Point(0, 1));
	p4.push_back(Point(1, 1));
	p4.push_back(Point(0, 1));
	p4.push_back(Point(0, 0));
	p4.push_back(Point(0, 2));

	std::cout << "Is p a palindrome?: " << (is_palindrome(p, is_equals<int>) ? "true" : "false") << "\n";
	std::cout << "Is p1 a palindrome?: " << (is_palindrome(p1, is_equals<int>) ? "true" : "false") << "\n";
	std::cout << "Is p2 a palindrome?: " << (is_palindrome(p2, is_equals<int>) ? "true" : "false") << "\n";

	std::cout << "Is p3 a palindrome?: " << (is_palindrome(p3, is_equals<Point>) ? "true" : "false") << "\n";
	std::cout << "Is p4 a palindrome?: " << (is_palindrome(p4, is_equals<Point>) ? "true" : "false") << "\n";
	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "\n";

	return 0;
}
