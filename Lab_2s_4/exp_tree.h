#pragma once

#include <string>

namespace express
{

	struct EpxTree
	{
		int tree_depth = 0;

		struct Node
		{
			char val;
			Node* l_child = nullptr;
			Node* r_child = nullptr;
			Node(char val);
		};

		Node* head;

		void build(char* input);

		void print(Node* iter);
		void printGraph(const std::string& prefix, const express::EpxTree::Node* node, bool isLeft);
	};

	int precedence(char input);
	bool is_num_var(char input);

	void infix_to_postfix(char* input, char* result);
}
