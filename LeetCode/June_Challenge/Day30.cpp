#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    // Define the structure of the trie
    struct TrieNode {
        TrieNode* letter[26];
        string word;
    };
    // Build the trie
    TrieNode* constructWord(vector<string>& words) {
        // Initialize the root node of the trie
        TrieNode* root = new TrieNode();
        // Iterate through each word in the list
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            TrieNode *node = root;
            // Iterate through each letter of a word
            for (int j = 0; j < word.size(); j++) {
                char ch = word[j] - 'a';
                // If the letter does not exist already, add it to the trie
                if (node->letter[ch] == nullptr) {
                    node->letter[ch] = new TrieNode();
                }
                // Store the letter in the trie node
                node = node->letter[ch];
            }
            // Store the word in the trie node
            node->word = word;
        }
        return root;
    }
    // Use DFS to search for the word in the board
    void search(vector<vector<char>>& board, TrieNode* node, int i, int j, vector<string>& words_found) {
        // Check if the current position is out of bounds
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) {
            return;
        }
        char current_letter = board[i][j];
        char ch = current_letter - 'a';
        // Check if the letter has already been visited
        if (current_letter == 'X' || node->letter[ch] == nullptr) {
            return;
        }
        node = node->letter[ch];
        // Add the word found to the resultant array of words
        if (node->word.size() > 0) {
            words_found.push_back(node->word);
            node->word = "";
        }
        // Mark visited nodes
        board[i][j] = 'X';
        // Perform DFS on each letter to check if it forms the given word
        search(board, node, i + 1, j, words_found);
        search(board, node, i, j + 1, words_found);
        search(board, node, i - 1, j, words_found);
        search(board, node, i, j - 1, words_found);
        board[i][j] = current_letter;
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> words_found;
        // Build the trie using the given list words
        TrieNode* root = constructWord(words);
        if (board.size() == 0) {
            return words_found;
        }
        // Iterate through each cell of the board and search for the required letters to form a word
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                search(board, root, i, j, words_found);
            }
        }
        return words_found;
    }
};