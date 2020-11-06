/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    Node *recursive(Node *node, map<int, Node*>&solution_store) {
        Node *copy_node = new Node();
        if(solution_store[node->val]!=nullptr) //This node has been already been seen.
            return solution_store[node->val];
        
        solution_store[node->val] = copy_node;
        copy_node->val = node->val;
        
        for(auto curr : node->neighbors) {
         
              
              copy_node->neighbors.push_back(recursive(curr,solution_store));
            
        }
        return copy_node;
    }
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        
        map<int, Node*> solution_store;
        return recursive(node, solution_store);
    }
};
