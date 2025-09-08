// Valid Palindrome

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string MergedString;
        /*int ptr1=0, ptr2=0;
        int count = max(word1.size(), word2.size());
        while(count--){
            if(ptr1 < word1.size()){
                MergedString.push_back(word1[ptr1++]);
            }
            if(ptr2 < word2.size()){
                MergedString.push_back(word2[ptr2++]);
            }
        }
        return MergedString;*/
        /*for(int i=0, j=0; i<word1.size() || j<word2.size(); i++){
            if(i< word1.size()){
                MergedString.push_back(word1[i++]);
            }
            if(j< word2.size()){
                MergedString.push_back(word2[j++]);
            }
        }
        return MergedString;*/

        for(int i=0; i<word1.size() || i<word2.size(); i++){
            if(i< word1.size()){
                MergedString.push_back(word1[i]);
            }
            if(i< word2.size()){
                MergedString.push_back(word2[i]);
            }
        }

    }

    
};
