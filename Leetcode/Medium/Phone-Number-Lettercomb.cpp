#include <iostream>
#include <vector>
#include <unordered_map>
std::vector<std::string> letterCombinations(std::string digits) {
        std::unordered_map<char,std::string> phoneMap = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}
        };
       std:: vector<std::string> arr;
        for(int i=0;i<digits.length();i++){
            arr.push_back(phoneMap[digits[i]]);
        }
        
    }
int main(){

    return 0;
}