//Santosh Bhandari
//Lab 6
//Data Structure

#include <string>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <random>
#include <vector>
#include "BinarySearchTree.h"


std::vector<int> theTreeSorted;

void display(int& anItem)
{
	std::cout << anItem << " ";
	theTreeSorted.push_back(anItem);
}

int main() {
	
	std::random_device rd;
	
	BinarySearchTree<int> theTree;
	
	int num = 0;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
 
    for (int i=0; i<21; ++i){
    num = dis(gen);
	std::cout << num << " ";
	theTree.add(num);
	}
	
	std::cout << "\n\nRemove the first number inserted\n";

	theTree.remove(num);

	std::cout << "\nRemoved " << num << " from the tree.\n";
	
	std::cout << "\nThe Inorder Binary Search Tree contains: \n" << std::endl;

	theTree.inorderTraverse(display);

	return 0;
}
